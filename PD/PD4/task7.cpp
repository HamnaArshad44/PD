#include<iostream>
using namespace std;
void flowershop(float R, float W, float T);
main(){
	float R, W, T;
	cout<<"Red Rose: ";
	cin>>R;
	cout<<"White Rose: ";
	cin>>W;
	cout<<"Tulips: ";
	cin>>T;
	flowershop(R, W, T);
}
void flowershop(float R, float W, float T){
	float pr;
	pr=((R*2.00)+(W*4.10)+(T*2.50));
	cout<<"Original Price: $"<<pr <<endl;
	if(pr > 200){
	cout<<"Price after Discount: $"<<pr-(pr*0.2);
						}
	if(!(pr > 200 )){
	cout<<"No discount applied.";
						}
}