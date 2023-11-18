#include <iostream>
using namespace std;
void pintoDance(string pin);
main()
{
    string pin;
    cout << "Enter your PIN (4 digits): ";
    cin >> pin;
    int size = pin.length();
    if (size != 4)
    {
        cout << "Invalid input.";
    }
    else
    {
        pintoDance(pin);
    }
}
void pintoDance(string pin)
{
    string dance[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado",
                        "Pop", "Lock", "Arabesque"};
    int valid = 0;

    for (int i = 0; i < 4; i++)
    {
        if (pin[i] == '0' || pin[i] == '1' || pin[i] == '2' || pin[i] == '3' || pin[i] == '4' || pin[i] == '5' || pin[i] == '6' || pin[i] == '7' || pin[i] == '8' || pin[i] == '9')
        {
            valid++;
        }
    }
    if (valid != 4)
    {
        cout << "Invalid input.";
    }
    else if (valid == 4)
    {
        for (int i = 0; i < 4; i++)
        {
            int currentValue = pin[i] - '0';
            int dancevalue = i + currentValue;
           
           if (dancevalue > 9)
            {
                dancevalue = dancevalue%10;
            }
            cout << dance[dancevalue];
            if (i != 3)
            {
                cout << ", ";
            }
        }
    }
}