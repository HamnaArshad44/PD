#include<iostream>
using namespace std;
main() {
	float imp;
	float play;
	int chance;
	cout<< "Enter Imposter Count: ";
	cin>>imp;
	cout<< "Enter Player Count: ";
	cin>>play;
	chance = 100*(imp/play);
	cout<<"Chance of being an imposter: "<<chance<< "%";
}