#include <iostream>
using namespace std;
bool arranged(int elements[], int size);

main()
{
    int size;
    int elements[100];
    int length;
    cout << "Enter the length of the array: ";
    cin >> size;
    if (size <= 0)
    {
        cout << "Invalid Input. Number of elements must be greater than 0.";
    }
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < size; i++)
    {

        cin >> elements[i];
    }

    bool ans = arranged(elements, size);
    cout << "Can be arranged: " << ans;
}
bool arranged(int elements[], int size)
{
    bool canArranged = false;
     int ordered[100];

    int count;
    for (int i = 0; i < size; i++)
    {
        count = 0;
        for (int j = 0; j < size; j++)
        {

            if (elements[i] > elements[j])
            {

                count++;
            }
        }

        ordered[count] = elements[i];
       
    }
    int x=0; 
    for(int k=0; k<size; k++)
    {
        
        if((ordered[k])+1== ordered[k+1])
        {
            x++;
        }
    }
    if(x==size-1)
    {
        canArranged = true;
    }
    else{
        canArranged = false;
    }

    return canArranged;
}
