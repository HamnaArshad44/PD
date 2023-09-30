#include<iostream>
using namespace std;
void airline(string name,float price);
main(){
	string name;
	cout<<"Enter the country's name: ";
	cin>> name;
	float price;
	cout<<"Enter the ticket price in dollars: $";
	cin>>price;
	airline(name, price);
}
void airline(string name,float price)
{
	if(name == "Pakistan"){
		price=price-(price*0.05);
		cout<<"Final ticket price after discount: $"<<price;
}
	if(name == "Ireland"){
		price=price-(price*0.1);
		cout<<"Final ticket price after discount: $"<<price;
}
	if(name == "India"){
		price=price-(price*0.2);
		cout<<"Final ticket price after discount: $"<<price;
}
	if(name == "England"){
		price=price-(price*0.3);
		cout<<"Final ticket price after discount: $"<<price;
}
	if(name == "Canada"){
		price=price-(price*0.45);
		cout<<"Final ticket price after discount: $"<<price;
}	
}