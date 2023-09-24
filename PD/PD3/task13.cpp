#include<iostream>
using namespace std;
main() {
	int digit;
	cout<< "Enter 5-digit number: ";
	cin>> digit;
	int sum=(digit/10000)+((digit%10000)/1000)+((digit%1000)/100)+((digit%100)/10)+(digit%10);
	cout<<"Sum of the individual digits: "<<sum;
}