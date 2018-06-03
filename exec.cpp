#include <opencv2/opencv.hpp>
#include <iostream>
#include <stdio.h>
#include "Resize.cpp"

int main(int argc, char** argv)
{
	int action = 0;

	while (action != 6){
		cout<< "Que souhaitez-vous faire ? "<<  "\n 1 == > Dilatation/Erosion" << "\n 2 == > Resizing" 
			<< "\n 3 == > Lighten/Darken" << "\n 4 ==> Panorama Stiching" << "\n 5 ==> Canny edge detection" 
			<< "\n 6 ==> Quitter"<< endl;
		cin >> action;
		while (action < 1 || action > 6){
			cout<< "Action inconnu, rentrez une nouvelle action : "<<endl;
			cin >> action;
		}
		if (action == 2)resize();
		
	}




}
