#include<iostream>
using namespace std;
bool isRepeated(int l);
int size;
int elements[100];
main()
{
   
    int length;
    cout << "Enter the length of the array: ";
    cin >> size;
    if (size <= 0)
    {
        cout << "Invalid Input. Number of elements must be greater than 0.";
    }
 cout<<"Enter the elements of the array: "<<endl;
    for (int i = 0; i < size; i++)
    {
       
        cin >> elements[i];
    }
    cout<<"Enter the length of the cycle: ";
    cin>>length;
   bool ans= isRepeated(length);
   cout<<"Output: "<<ans;
    
}
bool isRepeated(int length)
{  
 int count = 0;
 bool repeated= false;
    for(int i=0;i+length<size ;i++)
     {

     if(elements[i]==elements[i+length])
     {
        repeated= true;
       
       
     }
     }
   
if(length>size)
{
    repeated = true;
}
    return repeated;
       
}
