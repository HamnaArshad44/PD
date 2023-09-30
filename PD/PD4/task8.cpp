#include<iostream>
using namespace std;
void pet(int holidays);
main(){
	int holidays;
	cout<<"Holidays: ";
	cin>> holidays;
	pet(holidays);
}
void pet(int holidays){
	int gametime, hours , minutes , diff;
	gametime = ((365-holidays)*63)+(holidays*127);
	diff = 30000-gametime;
	hours=diff/60;
	minutes =diff-(hours*60);
	if(hours < 0){hours = -hours;}
	if(minutes < 0){minutes = -minutes;}
	if(gametime <= 30000){
	cout<<"Tom sleeps well" <<endl;
	cout<< hours <<" hours and "<< minutes <<" minutes less for play";
}
	
	if(!(gametime <= 30000)){
	cout<<"Tom will run away"<<endl;
	cout<< hours <<" hours and "<< minutes << " minutes for play";	
		}
}