#include<iostream>
using namespace std;
float total(string day , string type ,float quantity );
main()
{
    string type , day ; 
    float quantity;
    float ans;
    cout<<"Enter the fruit name: ";
    cin>> type;
    cout<<"Enter the day of the week (e.g., Monday, Sunday): ";
    cin>> day;
    cout<<"Enter the quantity: ";
    cin>> quantity;
    ans = total(day, type, quantity);
    cout << ans;
    
}
float total( string day , string type ,float quantity )
{
    double ans1 = 0.0;
    if (day == "Sunday" || day == "Saturday")
    {
        if(type == "banana")
        {
            ans1 = 2.70* quantity;
            
        }
        else if(type =="apple")
        {
            ans1 = quantity*1.25;
            
        }
        else if(type =="orange")
        {
            ans1 = quantity*0.90;
        }
        else if(type =="grapefruit")
        {
            ans1 = quantity*1.60;
        }
        else if(type =="kiwi")
        {
            ans1 = quantity*3.00;
        }
        else if(type =="pineapple")
        {
            ans1 = quantity*5.60;
        }
        else if(type =="grapes")
        {
            ans1 = quantity*4.20;
        }
        else{
            cout<< "error";
        }
    }
    else if (!(day == "Sunday"  || day == "Saturday"))
    {
        if(type =="banana")
        {
            ans1 = quantity*2.50;
        }
        else if(type =="apple")
        {
            ans1 = quantity*1.20;
        }
        else if(type =="orange")
        {
            ans1 = quantity*0.85;
        }
        else if(type =="grapefruit")
        {
            ans1 = quantity*1.45;
        }
        else if(type =="kiwi")
        {
            ans1 = quantity*2.70;
        }
        else if(type =="pineapple")
        {
            ans1 = quantity*5.50;
        }
        else if(type =="grapes")
        {
            ans1 = quantity*3.85;
        }
        else{
            cout<< "error"<< endl;
        }
    }
    else{
        cout<<"error";
    }
    return ans1;
}