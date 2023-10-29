#include <iostream>
using namespace std;
string activity(string temp ,string humidity);

main()
{
    string  temp , humidity;
    cout <<"Enter temperature (warm or cold): ";
    cin >> temp;
    cout <<"Enter humidity (dry or humid): ";
    cin >> humidity;
    string ans = activity(temp, humidity);
    cout<<"Recommended activity: "<< ans<<endl; 
}
string activity(string temp ,string humidity)
{
    string ans;
    if(temp == "warm" && humidity == "dry")
    {
        ans = "Play tennis";
    }
    else if(temp == "warm" && humidity == "humid")
    {
        ans = "Swim";
    }
    else if(temp == "cold" && humidity == "dry")
    {
        ans = "Play basketball";
    }
    else if(temp == "cold" && humidity == "humid")
    {
        ans = "Watch tv";
    }
    return ans;
}
