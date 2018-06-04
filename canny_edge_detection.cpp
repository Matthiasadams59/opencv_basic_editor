#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <stdlib.h>
#include <stdio.h>

using namespace std;
using namespace cv;

/** Function Headers */
void CannyThreshold(int, void*);

/// Global variables
Mat src5, src_gray;
Mat dst5, detected_edges;

int edgeThresh = 1;
int lowThreshold;
int upThreshold;
int const max_lowThreshold = 100;
int const max_upThreshold = 300;
int ratio = 0;
int kernel_size = 0;
int aperture_size;
int const max_kernel_size5 = 4;

/** @function main */
int cannyEdgeDetection()
{
    string imageName;
    while (!src5.data) {
        printf( " No image data \n " );
        cout << "Pick an image" << endl;
        cin >> imageName;
        src5 = imread(imageName, IMREAD_COLOR);

    }

  /// Create a matrix of the same type and size as src (for dst)
  dst5.create( src5.size(), src5.type() );

  /// Convert the image to grayscale
  cvtColor( src5, src_gray, CV_BGR2GRAY );

  /// Create a window
  namedWindow( "Edge Map", CV_WINDOW_AUTOSIZE );

  /// Create a Trackbar for user to enter threshold
  createTrackbar( "Lower Threshold :", "Edge Map", &lowThreshold, max_lowThreshold, CannyThreshold );
  createTrackbar( "Upper Threshold :", "Edge Map", &upThreshold, max_upThreshold, CannyThreshold );
  createTrackbar( "Kernel size :", "Edge Map", &kernel_size, max_kernel_size5, CannyThreshold );

    /// Show the image
  CannyThreshold(0, 0);

  /// Wait until user exit program by pressing a key
  waitKey(0);

  size_t lastindex = imageName.find_last_of(".");
  string rawname = imageName.substr(0, lastindex);
  imwrite(rawname+"_canned.jpg", dst5);

  return 0;
}

/**
* @function CannyThreshold
* @brief Trackbar callback - Canny thresholds input with a ratio 1:3
*/
void CannyThreshold(int, void*)
{
    /// Aperture size should be odd between 3 and 7
    if (kernel_size < 2) {
        aperture_size = 3;
    } else if (kernel_size < 4) {
        aperture_size = 5;
    } else if (kernel_size == 4) {
        aperture_size = 7;
    }

    /// Reduce noise with a kernel
    blur( src_gray, detected_edges, Size(aperture_size,aperture_size) );

    /// Canny detector
    Canny( detected_edges, detected_edges, lowThreshold, upThreshold, aperture_size );

    /// Using Canny's output as a mask, we display our result
    dst5 = Scalar::all(0);

    src5.copyTo( dst5, detected_edges);
    imshow( "Edge Map", dst5 );
}

