#include <opencv2/opencv.hpp>
#include <iostream>
#include <cstdio>
#include "Resize.cpp"
#include "resizing.cpp"
#include "erosion_dilatation.cpp"
#include "lighten_darken.cpp"
#include "canny_edge_detection.cpp"
#include "panorama_stitching.cpp"
#include "face_recognition.cpp"


int main(int argc, char** argv)
{
    cout << argv[0] << endl;
	int action = 0;

    while (action != 7){
        cout<< "Que souhaitez-vous faire ? "<<  "\n 1 == > Dilatation/Erosion" << "\n 2 == > Resizing"
            << "\n 3 == > Lighten/Darken" << "\n 4 ==> Panorama Stiching" << "\n 5 ==> Canny edge detection"
            << "\n 6 ==> Face Recognition "<< " \n 7 ==> Quitter" <<endl;
        cin >> action;
        if (action == 1) {
            dilatation_erosion();
        } else if (action == 2) {
            resizing();
        } else if (action == 3) {
            lighten_darken();
        } else if (action == 4) {
            panorama_stitching();
        } else if (action == 5) {
            cannyEdgeDetection();
        } else if (action == 6) {
            FaceRecognition();
        }
        if (action <= 6 && action >= 1) {
            action = 7;
        }
    }
    return 0;

}
