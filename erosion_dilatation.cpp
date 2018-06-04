#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

/// Global variables
Mat src1, erosion_dst, dilation_dst;

int erosion_elem = 0;
int erosion_size = 0;
int dilation_elem = 0;
int dilation_size = 0;
int const max_elem = 2;
int const max_kernel_size1 = 21;

/** Function Headers */
void Erosion( int, void* );
void Dilation( int, void* );

/** @function main */
int dilatation_erosion()
{

    string imageName;
    while (!src1.data) {
        printf( " No image data \n " );
        cout << "Pick an image" << endl;
        cin >> imageName;
        src1 = imread(imageName, IMREAD_COLOR);

    }

    int erosion_choice = -1;
    while (erosion_choice != 0 && erosion_choice != 1) {
        cout << " 1 for Erosion or 0 for Dilation" << endl;
        cin >> erosion_choice;
    }

    if (erosion_choice == 1) {
        Erosion( 0, 0 );
    } else if (erosion_choice == 0) {
        Dilation( 0, 0 );
    }

    waitKey(0);
    size_t lastindex = imageName.find_last_of(".");
    string rawname = imageName.substr(0, lastindex);
    if (erosion_choice == 1) {
        String newImage_name = rawname + "_eroded.jpg";
        imwrite(newImage_name, erosion_dst);
    } else if (erosion_choice == 0) {
        String newImage_name = rawname + "_dilatated.jpg";
        imwrite(newImage_name, dilation_dst);
    }
    return 0;
}

/**  @function Erosion  */
void Erosion( int, void* )
{
    int erosion_type;
    if( erosion_elem == 0 ){ erosion_type = MORPH_RECT; }
    else if( erosion_elem == 1 ){ erosion_type = MORPH_CROSS; }
    else if( erosion_elem == 2) { erosion_type = MORPH_ELLIPSE; }

    Mat element = getStructuringElement( erosion_type,
                                         Size( 2*erosion_size + 1, 2*erosion_size+1 ),
                                         Point( erosion_size, erosion_size ) );

    /// Create windows
    namedWindow( "Erosion", CV_WINDOW_AUTOSIZE );

    /// Create Erosion Trackbar
    createTrackbar( "Element:\n 0: Rect \n 1: Cross \n 2: Ellipse", "Erosion",
                    &erosion_elem, max_elem,
                    Erosion );

    createTrackbar( "Erosion size:\n 2n +1", "Erosion",
                    &erosion_size, max_kernel_size1,
                    Erosion );

    /// Apply the erosion operation
    erode( src1, erosion_dst, element );
    imshow( "Erosion", erosion_dst );
}

/** @function Dilation */
void Dilation( int, void* )
{
    int dilation_type;
    if( dilation_elem == 0 ){ dilation_type = MORPH_RECT; }
    else if( dilation_elem == 1 ){ dilation_type = MORPH_CROSS; }
    else if( dilation_elem == 2) { dilation_type = MORPH_ELLIPSE; }

    Mat element = getStructuringElement( dilation_type,
                                         Size( 2*dilation_size + 1, 2*dilation_size+1 ),
                                         Point( dilation_size, dilation_size ) );

    /// Create windows
    namedWindow( "Dilation", CV_WINDOW_AUTOSIZE );
    cvMoveWindow( "Dilation", src1.cols, 0 );

    /// Create Dilation Trackbar
    createTrackbar( "Element:\n 0: Rect \n 1: Cross \n 2: Ellipse", "Dilation",
                    &dilation_elem, max_elem,
                    Dilation );

    createTrackbar( "Dilation size:\n 2n +1", "Dilation",
                    &dilation_size, max_kernel_size1,
                    Dilation );

    /// Apply the dilation operation
    dilate( src1, dilation_dst, element );
    imshow( "Dilation", dilation_dst );
}