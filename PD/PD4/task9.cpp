#include<iostream>
using namespace std;
void tpchecker(int ppl, int tp);
main(){
	int ppl, tp;
	cout<<"Number of people in the household: ";
	cin>> ppl;
	cout<<"Number of rolls of TP: ";
	cin>> tp;
	tpchecker(ppl, tp);
}
void tpchecker(int ppl, int tp){
	int tplast;
	tplast = (500*tp)/(ppl*57);
	if(tplast>14){
	cout<<"Your TP will last "<<tplast<<" days, no need to panic!";
									}
	if(tplast<14){
	cout<<"Your TP will only last "<<tplast<<" days, buy more!";
									}
}