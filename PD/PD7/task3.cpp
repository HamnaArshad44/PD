#include<iostream>
using namespace std;
void printAmplify(int num);
main()
{
    int number;
    cout<<"Enter the number to Amplify: ";
    cin>>number;
    printAmplify(number);
}
void printAmplify(int num)
{
    int number;
   cout<<"1";
    for(int i=2; i<=num; i++)
    {
        if(i%4 == 0) 
        {
          number =  i*10;
            cout<<", "<<number;
        }
         else
         {
             cout<<", "<<i;
         }
       
    }
}