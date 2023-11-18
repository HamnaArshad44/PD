#include<iostream>
using namespace std;
int times(string colors[], int size);
main()
{
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;
    if (size <= 0)
    {
        cout << "Invalid Input. Number of elements must be greater than 0.";
    }

    string colors[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element " << i+1 << ": ";
        cin >> colors[i];
    }
   
    int ans = times(colors,size);
    cout<<"Time to color: "<<ans<<" seconds";
}
int times(string colors[], int size)
{
    int colorsq = size*2;
    int timetoswitch =0;
    for(int i=1;i<size;i++)
    {
        if(colors[i]!= colors[i-1])
        {
            timetoswitch++;
        }
    }
        int total = colorsq+ timetoswitch;
        return total;
}
