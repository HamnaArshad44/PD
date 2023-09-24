#include<iostream>
using namespace std;
main() {
	int digit;
	cout<< "Enter a 4-digit number: ";
	cin>> digit;
	int sum;
	int n1;
	int n2;
	int n3;
	int n4;
	n1=digit/1000;
	n2=(digit%1000)/100;
	n3=(digit%100)/10;
	n4=(digit%10);
	sum=n1+n2+n3+n4;
	cout<<"Sum of the individual digits: "<<sum;
}