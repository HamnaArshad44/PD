#include <iostream>
using namespace std;
int premorial(int num);
bool isPrime(int x);
int check = 0;
float multiply = 1;
int digit = 1;
int x = 2;
main()
{
    int num;

    cout << "Enter Number: ";
    cin >> num;
    float mul = premorial(num);
    cout << mul << endl;
}

int premorial(int num)
{
    while (digit <= num)
    {
        if (isPrime(x))
        {
            multiply = multiply * x;
            digit++;
        }
    
            x++;
            check=0;
    }
    return multiply;
}
bool isPrime(int x)

{
    for (int j = 1; j <= x; j++)
    {
        if (x % j == 0)
        {
            check++;
        }
    }

    if (check == 2)
    {
        return true;
        
    }
    else
    {
        return false;
    }
}