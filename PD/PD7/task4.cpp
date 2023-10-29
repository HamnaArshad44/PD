#include<iostream>
using namespace std;
main()
{
    int sum=0;
    int triangles;
    cout<<"Enter number of Triangle: ";
    cin>>triangles;
    for(int i=1; i <= triangles; i++)
    {
        sum= sum +i;
    }
    cout<<"Dots in the Triangle: "<<sum;
}