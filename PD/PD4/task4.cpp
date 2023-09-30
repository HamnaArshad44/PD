#include<iostream>
using namespace std;
void checkspeed(float speed);
main(){
	float speed;
	cout<<"Speed: ";
	cin>>speed;
	checkspeed(speed);
}
void checkspeed(float speed){
	if(speed >100){
	cout<<"Halt... YOU WILL BE CHALLENGED!!!";
						 }
	if(!(speed>100)){
	cout<<"Perfect! You're going good.";
					   }
}