#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;

int scaleX;
int scaleY;

double double_scaleX;
double double_scaleY;

const int max_scaleX = 200;
const int max_scaleY = 200;

Mat src;
Mat dst;

/**
 * @function on_trackbar
 * @brief Callback for trackbar
 */
void on_trackbar( int, void* )
{
    double_scaleX = (double) (scaleX+1)/ 100;
    double_scaleY = (double) (scaleY+1)/ 100;

    resize(src, dst, Size(round(double_scaleX*src.cols), round(double_scaleY*src.rows)), 0, 0, INTER_LINEAR);

    namedWindow("Rezize", CV_WINDOW_AUTOSIZE);
    imshow( "Resize", dst );
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

    /// Create Windows
    namedWindow("Original", CV_WINDOW_AUTOSIZE);

    createTrackbar( "Weight", "Original",
                    &scaleX, max_scaleX,
                    on_trackbar );

    createTrackbar( "Height", "Original",
                    &scaleY, max_scaleY,
                    on_trackbar );

    /// Apply the convert operation
    imshow( "Original", src);

    /// Wait until user press some key
    waitKey(0);

    size_t lastindex = imageName.find_last_of(".");
    string rawname = imageName.substr(0, lastindex);

    imwrite(rawname+"_resized.jpg", dst);
    return 0;
}
