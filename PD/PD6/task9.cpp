#include<iostream>
using namespace std;
string position(int height, int x, int y );
main()
{
    int height, x, y ;
    string ans;
    cout<<"Enter height: ";
    cin>> height;
    cout<<"Enter x coordinates: ";
    cin>> x;
    cout<<"Enter y coordinates: ";
    cin>> y;
    ans = position(height, x, y);
    cout << ans;
    
}
string position(int height, int x, int y )
{
    int length=height , width= height;
    string ans;
    if(x< 2*height && x> height)
    {
    length = 4*height;
    }
    if( y<height)
    {
    width = 3*height;
    }
    if(x<width && y< length)
    {
        ans = "Inside";
    }
    else if(x > height && x < 2*height && y > height && y < length)
    {
        ans= "Inside";
    }
    else if(x<=width && y<= length)
    {
        ans = "Border";
    }
    else {
        ans = "Outside";
    }
    return ans;
}