#include<iostream>
using namespace std;
void bonus(int x, int y);
main(){
	int x, y;
	cout<<"Enter your position: ";
	cin>> x;
	cout<<"Enter your friend's position: ";
	cin>> y;
	bonus(x,y);
}
void bonus(int x, int y){
	if(y-x <= 6){
	cout<<"true";
			}
	if(!(y-x <= 6)){
	cout<<"false";
			}
}