#include <iostream>
using namespace std;
int special(int elements[], int size);
main()
{
    int size;
    cout << "Enter the length of the array: ";
    cin >> size;
    if (size <= 0)
    {
        cout << "Invalid Input. Number of elements must be greater than 0.";
    }
    int elements[size];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < size; i++)
    {

        cin >> elements[i];
    }

    int ans = special(elements, size);
    cout << "Special value: " << ans;
}
int special(int elements[], int size)
{
    int count=0;
    int value=-1;

for(int j=1; j<=size; j++)
{
    count=0;
    for (int i = 0; i < size; i++)
    {
       if(elements[i]>=j)
       {
        count++;
       } 
    }
    
    if(j==count)
    {
        value=j;
    }
    
}

    return value;
}
