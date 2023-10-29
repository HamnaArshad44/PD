#include<iostream>
using namespace std;
bool isPrime(int num);
int check=0;
main()
{
    int num;
    cout<<"Enter Number: ";
    cin>>num;
   cout<< isPrime(num);
    
    
}
bool isPrime(int num)
{
    if(num <=1)
    {
        return false;
    }
    else{
    for(int i=1; i<=num; i++)
    {
        if(num%i == 0)
        {
          check++;
        }
    }
  }
if(check ==2)
{
    return true;
}
else{
    return false;
}

}