#include <iostream>
#include<cmath>
using namespace std;
string contain_7(int number[], int size);
bool getSeven(int num);
main()
{
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;
    if (size <= 0)
    {
        cout << "Invalid Input. Number of elements must be greater than 0.";
    }

    int number[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element " << i+1 << ": ";
        cin >> number[i];
    }
    string result = contain_7(number, size);
    cout << result << endl;
}
string contain_7(int number[], int size)
{
    string ans="";
    for(int i = 0; i < size; i++)
    {
        bool get= getSeven(number[i]);
        if(get)
        {
            ans = "Boom!";
            break;
        }
    

      else{
        ans ="there is no 7 in the array";
      }
    }
    
    return ans;
}
bool getSeven(int num)
{
    bool ans= false;

 if(num<10)
 {
    if(num==7)
    {
        ans = true;
    }
 } 
 else{
   while(num !=0)
   {
    if(num%10==7)
    {
        ans = true;
        break;
    }
   
        num= num/10;
    
   }
 }
    return ans;
}
