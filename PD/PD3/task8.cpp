#include<iostream>
using namespace std;
main() {
	float vegpr;
	float fruitpr;
	float totalveg;
	float totalfruit;
	float earning;
	cout<< "Enter vegetable price per kilogram (in coins): ";
	cin>> vegpr;
	cout<< "Enter fruit price per kilogram (in coins): ";
	cin>> fruitpr;
	cout<< "Enter total kilograms of vegetables: ";	
	cin >> totalveg;
	cout <<"Enter total kilograms of fruits: ";
	cin >> totalfruit;
	earning = ((vegpr*totalveg)+(fruitpr*totalfruit))/1.94;
	cout<< "Total earnings in Rupees (Rps): "<< earning; 
}