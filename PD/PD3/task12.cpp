#include<iostream>
using namespace std;
main () {
	float number;
	float width;
	float height;
	float final;
	cout<< "Number of square meters you can paint: ";
	cin>> number;
	cout<< "Width of the single wall (in meters): ";
	cin>>width;
	cout<< "Height of the single wall (in meters): ";
	cin>>height;
	final = number/(width*height);
	cout<< "Number of walls you can paint: "<< final;
}