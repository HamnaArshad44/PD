#include <iostream>
using namespace std;
float amount( char code, char time , float minutes );
main()
{
    char code, time ; float minutes;
    float ans;
    cout<<"Enter the service code (R/r for regular, P/p for premium): ";
    cin>> code;
     if(code == 'P' || code == 'p')
     {
    cout<<"Enter time of the call (D/d for day, N/n for night): ";
    cin>> time;
    }

    cout<<"Enter the number of minutes used: ";
    cin >> minutes ;
    ans = amount(code, time, minutes);
    cout<<"Total Minutes Used: "<<minutes<< " minutes"<<endl;   
    cout<<"Amount Due: $"<<ans;
}
float amount( char code, char time , float minutes )
{   float ans;
     if(code == 'P' || code == 'p'){
        cout<<"Service Type: Premium"<<endl;

        if((time == 'D' || time == 'd') &&(minutes < 75))
        {
            ans = 25.00;
    }
        else if((time == 'D' || time == 'd') &&(minutes >= 75))
        {
            ans = ((minutes - 75)*0.10)+25.00;
    }
        else if((time == 'N' || time == 'n') &&(minutes < 100))
        {
            ans = 25.00;
    }
        else if((time == 'N' || time == 'n') &&(minutes >= 100))
        {
            ans = ((minutes - 100)*0.05) + 25.00;
    }
         else{
        cout<<"error";
       }
            }
      
    else if(code == 'R' || code == 'r'){
         cout<< "Servce Type: Regular"<<endl;
        if(minutes < 50)
        {
            ans = 10.00;
        }
        else if(minutes >= 50)
        {
            ans = ((minutes - 50)*0.20)+10.00 ;
        }
        else{
            cout<<"error";
        }
       
    }
    else{
        cout<<"error";
    }
    return ans;
}
