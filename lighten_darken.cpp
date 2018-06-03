#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;

//double alpha = 1.0;
int alpha = 0;
int beta = 0;
double double_alpha;
double const max_alpha = 200;
int const max_beta = 400;

Mat src;
Mat dst;

/**
 * @function on_trackbar
 * @brief Callback for trackbar
 */
void on_trackbar( int, void* )
{
    double_alpha = (double) (100+alpha)/100 ;
    double double_beta = beta - 200;

    src.convertTo(dst, dst.type(), double_alpha, double_beta);
    imshow( "Lighten / Brighten", dst );
}


int main( int argc, char** argv )
{
    // Read image from file
    String imageName("van_gogh.jpg");
    if (argc > 1) {
        imageName = argv[1];
    }
    src = imread(imageName, IMREAD_COLOR);

    //if fail to read the image
    if(!src.data )
    {
        printf( " No image data \n " );
        return -1;
    }
    dst = Mat::zeros(src.size(), src.type());
    src.copyTo(dst);


    /// Create Windows
    namedWindow("Original", CV_WINDOW_FULLSCREEN);
    namedWindow("Lighten / Brighten", CV_WINDOW_AUTOSIZE);


    createTrackbar( "Contrast", "Original",
                    &alpha, max_alpha,
                    on_trackbar );

    createTrackbar( "Brightness", "Original",
                    &beta, max_beta,
                    on_trackbar );

    /// Apply the convert operation
    imshow("Original", src);
    //imshow( "Lighten / Brighten", dst );

    /// Wait until user press some key
    waitKey(0);

    size_t lastindex = imageName.find_last_of(".");
    string rawname = imageName.substr(0, lastindex);

    imwrite(rawname+"_adjusted.jpg", dst);
    return 0;
}
