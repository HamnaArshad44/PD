#include<iostream>
using namespace std;
main() {
	int number;
	cout<< "Enter the number of sides of the polygon: ";
	cin>>number;
	int sum;
	sum = (number-2)*180;
	cout<< "The sum of internal angles of a "<<number<< "-sided polygon is: "<< sum<<" degrees";
}