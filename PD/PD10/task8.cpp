#include <iostream>
using namespace std;
int rotation(string elements[], int size);
main()
{
    int size;

    cout << "Enter the length of the array: ";
    cin >> size;
    if (size <= 0)
    {
        cout << "Invalid Input. length of array must be greater than 0.";
    }

    string elements[100];
    cout << "Enter the elements of the array (\"left\" or \"right\"): "<<endl;
    for (int i = 0; i < size; i++)
    {

        cin >> elements[i];
    }

    int ans = rotation(elements, size);
    cout << "Number of full rotations: "<< ans;
}
int rotation(string elements[], int size)
{

    int count = 0;
    int spin = 0;
    for (int i = 0; i < size; i++)
    {
        if (elements[i] == "right")
        {
            spin += 90;
        }
        else if (elements[i] == "left")
        {
            spin -= 90;
        }
    }
    if (spin < 0)
    {
        spin = -spin;
    }
    if (spin % 360 == 0)
    {
        count = spin / 360;
    }

    return count;
}
