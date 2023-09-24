#include<iostream>
using namespace std;
main() {
	int mint;
	int sec;
	int fpm;
	int total;
	cout<< "Number of Minutes: ";
	cin>>mint;
	sec = mint*60;
	cout<< "Frames per Second: ";
	cin>>fpm;
	total = sec*fpm;
	cout<< "Total Number of Frames: "<<total;
}