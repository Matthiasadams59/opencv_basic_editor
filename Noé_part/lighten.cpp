#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main( int argc, char** argv )
{

    // __________ VARIABLES INITIALISATION __________

    double alpha = 1.0; 
    int beta = 0;

    int brightness = 0;

    String imageName("van_gogh.jpg"); // On charge l'image

    Mat image = imread( imageName );
    Mat new_image = Mat::zeros( image.size(), image.type() ); // On créer une nouvelle image de la meme taille que celle chargée

    int x_size = image.cols;
    int y_size = image.rows;

    int x_resize = image.cols;
    int y_resize = image.rows;

    String canny_choice = "no";

    // __________ MENU _________

    cout << " Lighten / Darken " << endl;
    cout << "-------------------------" << endl;
    cout << "* Contrast alpha [1.0 / 3.0]: "; 
    cin >> alpha;
    cout << "* Contrast beta [0 / 100]: ";    
    cin >> beta;
    cout << "* Brightness [-150 / 150]: ";    
    cin >> beta;
    cout << "* Canny Edge Detection [yes / no]:";
    cin >> canny_choice;
    cout << "* Resize (current x : " << x_size << " & y : " << y_size << ") \n";
    cout << "x = ";
    cin >> x_resize;
    cout << "y = "; 
    cin >> y_resize;

    // __________ CONTRAST _________

    for( int y = 0; y < image.rows; y++ ) {
        for( int x = 0; x < image.cols; x++ ) {
            for( int c = 0; c < 3; c++ ) {
                new_image.at<Vec3b>(y,x)[c] =
                  saturate_cast<uchar>( alpha*( image.at<Vec3b>(y,x)[c] ) + beta );
            }
        }
    }

    // __________ BRIGTHNESS __________

    new_image.convertTo(new_image, -1, 1, brightness);

    // __________ CANNY EDGE DETECTION __________

    if(canny_choice == "yes")
    {

        Mat dst, detected_edges;
        Mat src_gray;

        dst.create( new_image.size(), new_image.type() );

        cvtColor( new_image, src_gray, CV_BGR2GRAY );
        blur( src_gray, detected_edges, Size(3,3) );

        int value_canny = 0;

        cout << "Canny Edge Detection value [0 / 100]:";
        cin >> value_canny;

        Canny( detected_edges, detected_edges, value_canny, value_canny*3, 3 );
        dst = Scalar::all(0);

        new_image.copyTo(dst, detected_edges);

        new_image = dst;

    }
    else
    {
        // Do nothing
    }

    // __________ RESIZING __________

    Mat resize_img(y_resize, x_resize, CV_8UC1, Scalar(70));
    resize(new_image, resize_img, resize_img.size(), 0, 0, INTER_NEAREST);

    // __________ DISPLAYING __________

    namedWindow("Image", WINDOW_AUTOSIZE);
    namedWindow("Nouvelle_Image", WINDOW_AUTOSIZE);
    imshow("Image", image);
    imshow("Nouvelle_Image", resize_img);

    waitKey();

    return 0;
}