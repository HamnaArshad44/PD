#include<iostream>
using namespace std;
int hours, days, workers;
float  totaltime;
string time( int hours, int days, int workers);
main(){
    cout<<"Enter the needed hours: ";
    cin>> hours;
    cout<<"Enter the days that the firm has: ";
    cin>> days;
    cout<<"Enter the number of all workers: ";
    cin>> workers;
    string hLeft =time(hours, days, workers);
    cout<<hLeft;
   
} 
string time( int hours, int days, int workers){
    float workingdays, workingPerday, totaltime; 
    int left;
    string hLeft;
    workingdays = days -(days*10*0.01);
    workingPerday = workers *10;
    totaltime = workingdays*workingPerday;
    if(left<= hours){
        left = hours - totaltime;
       hLeft = "Not enough time! "+ to_string(left) +" hours needed.";
    }
if(left> hours){
    left = totaltime - hours;
        hLeft = "Yes! "+ to_string(left) +" hours left.";
    }
    return hLeft;
}
