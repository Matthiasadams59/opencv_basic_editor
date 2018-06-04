#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;

//double alpha = 1.0;
int alpha = 0;
int beta = 200;
double double_alpha;
double const max_alpha = 200;
int const max_beta = 400;

Mat src3;
Mat dst3;

/**
 * @function on_trackbar
 * @brief Callback for trackbar
 */
void on_trackbar3( int, void* )
{
    double_alpha = (double) (100+alpha)/100 ;
    double double_beta = beta - 200;

    src3.convertTo(dst3, dst3.type(), double_alpha, double_beta);
    imshow( "Lighten / Brighten", dst3 );
}


int lighten_darken()
{
    string imageName;
    while (!src3.data) {
        printf( " No image data \n " );
        cout << "Pick an image" << endl;
        cin >> imageName;
        src3 = imread(imageName, IMREAD_COLOR);

    }
    dst3 = Mat::zeros(src3.size(), src3.type());
    src3.copyTo(dst3);


    /// Create Windows
    namedWindow("Lighten / Brighten", CV_WINDOW_AUTOSIZE);


    createTrackbar( "Contrast", "Lighten / Brighten",
                    &alpha, max_alpha,
                    on_trackbar3 );

    createTrackbar( "Brightness", "Lighten / Brighten",
                    &beta, max_beta,
                    on_trackbar3 );

    /// Apply the convert operation
    imshow( "Lighten / Brighten", dst3 );

    /// Wait until user press some key
    waitKey(0);

    size_t lastindex = imageName.find_last_of(".");
    string rawname = imageName.substr(0, lastindex);

    imwrite(rawname+"_adjusted.jpg", dst3);
    return 0;
}
