#include<iostream>
using namespace std;
void evenOddTransform(int numbers[], int size, int n);
main()
{
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;
    if (size <= 0)
    {
        cout << "Invalid Input. Number of elements must be greater than 0.";
    }
    int numbers[size];
    for(int i=0; i<size; i++)
    {
        cout<<"Enter Element "<<i+1<<": ";
        cin>>numbers[i];
    }
    int n;
    cout<<"Enter number of times even-odd transformation need to be done: ";
    cin>>n;

    evenOddTransform(numbers, size, n);
}
void evenOddTransform(int numbers[], int size, int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(numbers[j]%2 ==0)
            {
                numbers[j] = numbers[j]-2;
            }
            if(numbers[j]%2 !=0)
            {
                numbers[j] = numbers[j]+2;
            }
        }
    }
    cout<<"["<<numbers[0];
    for(int x=1; x<size; x++)
    {
        cout<<", "<<numbers[x];
    }
    cout<<"]";   
}