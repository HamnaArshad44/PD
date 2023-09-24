#include<iostream>
using namespace std;
main() {
	string name;
	float adultpr;
	float childpr;
	float adultsold;
	float childsold;
	float donated;
	float total;
	float donation;
	float remaining;
	cout<< "Enter the movie name: ";
	cin>> name;
	cout<< "Enter the adult ticket price: $";
	cin>> adultpr;
	cout<< "Enter the child ticket price: $";
	cin>> childpr;
	cout<< "Enter the number of adult tickets sold: ";
	cin>> adultsold;
	cout<< "Enter the number of child tickets sold: ";
	cin>> childsold;
	cout<<"Enter the percentage of the amount to be donated to charity: ";
	cin>> donated;
	cout<<endl;
	total = (adultpr*adultsold)+(childpr*childsold);
	donation= total*donated/100;
	remaining = total-donation;
	cout<< "Movie: "<<name<< endl;
	cout<< "Total amount generated from ticket sales: $"<<total<<endl;
	cout<< "Donation to charity ("<<donated<<"%): $"<<donation<<endl;
	cout<< "Remaining amount after donation: $"<<remaining<<endl;
}