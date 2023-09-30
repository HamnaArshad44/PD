#include<iostream>
using namespace std;
void duration(int h, int m);
main(){
	int h, m ;
	cout<<"Enter the number of hours: ";
	cin>> h;
	cout<<"Enter the number of minutes: ";
	cin>> m;
	duration(h, m);
}
void duration(int h, int m){
	if(h*60>m){
	cout<<h;
}
	if(!(h*60>m)){
	cout<<m;
}
}