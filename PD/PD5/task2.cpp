#include<iostream>
using namespace std;
float volume(int l, int w, int h, string unit);
int l, w, h; string unit; float conVolume; 
main(){
    cout<<"Enter the length of the pyramid (in meters): ";
    cin>>l;
    cout<<"Enter the width of the pyramid (in meters): ";
    cin>>w;
    cout<<"Enter the height of the pyramid (in meters): ";
    cin>>h;
    cout<<"Enter the desired unit (millimeter, centimeter, meters, kilometers): ";
    cin>> unit;
    float v = volume(l,w,h, unit);
    cout<<"The volume of the pyramid is: "<<v <<" cubic " << unit;
}
float volume(int l, int w, int h, string unit){
    string volumeInUnit;
    float v = (l*w*h)/3;
    if(unit == "meters"){
     conVolume = v;
        }
    if(unit == "millimeters"){
     conVolume = v*(0.000000001);
    }
    if(unit == "centimeters"){
        conVolume = v*0.000001;
    }
    if(unit == "kilometers"){
        conVolume = ((l/1000.0)+(w/1000.0)+(h/1000.0))/3;
    }
    return conVolume;

}
