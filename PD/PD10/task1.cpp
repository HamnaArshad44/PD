#include<iostream>
using namespace std;
int progress(int days[], int size);
main()
{
    int size;
    cout << "Enter the number of Saturdays: ";
    cin >> size;
    if (size <= 0)
    {
        cout << "Invalid Input. Number of Saturday must be greater than 0.";
    }

    int days[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter miles run for Saturday " << i+1 << ": ";
        cin >> days[i];
    }
   
    int ans = progress(days,size);
    cout<<"Total progress days: "<<ans;
}
int progress(int days[], int size)
{
    int count=0;
    
    for(int i=0;i<size-1;i++)
    {
        if(days[i] < days[i+1])
        {
            count++;
           
        }
    }
       
        return count;
}
