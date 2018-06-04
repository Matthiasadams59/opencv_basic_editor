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

Mat src2;
Mat dst2;

/**
 * @function on_trackbar
 * @brief Callback for trackbar
 */
void on_trackbar2( int, void* )
{
    double_scaleX = (double) (scaleX+1)/ 100;
    double_scaleY = (double) (scaleY+1)/ 100;

    resize(src2, dst2, Size(round(double_scaleX*src2.cols), round(double_scaleY*src2.rows)), 0, 0, INTER_LINEAR);

    namedWindow("Rezize", CV_WINDOW_AUTOSIZE);
    imshow( "Resize", dst2 );
}


int resizing()
{
    string imageName;
    while (!src2.data) {
        printf( " No image data \n " );
        cout << "Pick an image" << endl;
        cin >> imageName;
        src2 = imread(imageName, IMREAD_COLOR);

    }
    dst2 = Mat::zeros(src2.size(), src2.type());

    /// Create Windows
    namedWindow("Original", CV_WINDOW_AUTOSIZE);

    createTrackbar( "Weight", "Original",
                    &scaleX, max_scaleX,
                    on_trackbar2 );

    createTrackbar( "Height", "Original",
                    &scaleY, max_scaleY,
                    on_trackbar2 );

    /// Apply the convert operation
    imshow( "Original", src2);

    /// Wait until user press some key
    waitKey(0);

    size_t lastindex = imageName.find_last_of(".");
    string rawname = imageName.substr(0, lastindex);

    imwrite(rawname+"_resized.jpg", dst2);
    return 0;
}
