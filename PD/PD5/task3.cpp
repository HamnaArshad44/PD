#include<iostream>
using namespace std;
char type;
float price ;
float final(char type , float price);
main(){
    cout<<"Enter the vehicle type code (M,E, S, V, T): ";
    cin>> type;
    cout<<"Enter the price of the vehicle: $" ;
    cin>> price;
    float aftertax = final(type, price);
    cout<<"The final price of the vehicle of type " <<type << " after adding the tax is $"<< aftertax;
}
float final(char type , float price){
    float tax, fp;
    if(type == 'M'){
    tax = price * (6/100.0);
    }
    if(type == 'E'){
    tax = (price*(8/100.0));
    }
    if(type == 'S'){
    tax = price * (10/100.0);
    }
    if(type == 'V'){
    tax = price * (12/100.0);
    }
    if(type == 'T'){
    tax = price * (15/100.0);
    }
    fp = price+ tax;
    return fp;
}