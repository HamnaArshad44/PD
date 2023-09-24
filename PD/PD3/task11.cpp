#include<iostream>
using namespace std;
main() {
	int age;
	int house;
	float average;
	cout<< "Enter the person's age: ";
	cin>>age;
	cout<< "Enter the number of times they've moved: ";
	cin>> house;
	average = age/(house+1);
	cout<< "Average number of years lived in the same house: "<<average;
}