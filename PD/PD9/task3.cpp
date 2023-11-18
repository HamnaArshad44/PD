#include<iostream>
using namespace std;
bool identical(string elements[], int size);
main()
{
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;
    if (size <= 0)
    {
        cout << "Invalid Input. Number of elements must be greater than 0.";
    }

    string elements[size];
    for(int i=0; i<size; i++)
    {
        cout<<"Enter Element "<<i+1<<": ";
        cin>>elements[i];
    }
    
    cout<<identical(elements,size);

}
bool identical(string elements[], int size)
{
      int count =0;
      for(int i=1; i<size ; i++)
    {
        if(elements[i] == elements[i-1])
    {
       count++;
    }
    }
    if(count==size-1)
    {
        return true;
    }  
    else{
        return false;
    }
}