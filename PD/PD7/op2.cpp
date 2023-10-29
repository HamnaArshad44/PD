#include<iostream>
using namespace std;
void upper_half(int);
void lower_half(int);
main()
{
    int rowsize;
    cout<<"Enter the desired number of rows: ";
    cin >> rowsize;
    int size=rowsize/2+1;
    upper_half(size);
    lower_half(size);
}
void upper_half(int size)
{

for(int row = size; row>=1;row--)
{
    for(int spaces = row; spaces>1; spaces--)
    {
        cout<<" ";
    }
    for(int stars = row; stars<= size; stars++ )
    {
        cout<<"*";
    }
    cout<<endl;
}
}
void lower_half(int size)
{
    for(int row = size; row>=1;row--)
{
    for(int spaces = row; spaces<size; spaces++)
    {
        cout<<" ";
    }
    for(int stars = 1; stars<=row; stars++ )
    {
        cout<<"*";
    }
    cout<<endl;
}
}