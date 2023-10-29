#include <iostream>
using namespace std;
string status(int h1, int h2, int m1, int m2);
string timing(int h1, int h2, int m1, int m2);

main()
{
    int h1, h2, m1, m2;
    string ans1, ans2;
    cout << "Enter Exam Starting Time (hour): ";
    cin >> h1;
    cout << "Enter Exam Starting Time (minutes): ";
    cin >> m1;
    cout << "Enter Student hour of arrival: ";
    cin >> h2;
    cout << "Enter Student hour of arrival: ";
    cin >> m2;

    ans1 = status(h1, h2, m1, m2);
    cout << ans1 <<endl;
    ans2 = timing(h1, h2, m1, m2);
    cout<< ans2 <<endl;
}
string status(int h1, int h2, int m1, int m2)
{
    float total1, total2;
    float difference;
    string ans;
    total1 = (h1*60)+m1;
    total2 = (h2*60)+m2;
   
    if((total2 < total1) || total2 == total1)
    {
        difference = total1 - total2;
        if(difference <= 30 || difference == 0)
        {
            ans = "On time" ;
        }
        else if(difference > 30)
        {
            ans = "Early";
        }
    }   

    else if(total2 > total1)
    {
        difference = total2 - total1;
        ans = "Late" ;
    }   
    return ans;
}
string timing(int h1, int h2, int m1, int m2)
{
    float total1, total2; int difference , diff_h, diff_m;
    string ans;
    total1 = (h1*60)+m1;
    total2 = (h2*60)+m2;

    if(total2 > total1 )
    {
        difference = total2 - total1 ;
        if(difference < 60){
        ans = to_string(difference)+ " minutes after te start ";
        }
        else if (difference > 60)
        {
        diff_h = difference/60;
        diff_m = difference%60;
        ans = to_string(diff_h)+ ":" + to_string(diff_m) + " hours after te start";
        }
    }   
   
    else if(total1 > total2)
    {
        difference = total1 - total2 ;
        if(difference < 60)
        {
        ans = to_string(difference)+ " minutes before te start ";
        }
        else if(difference >= 60)
        {
        diff_h = difference/60;
        diff_m = difference%60;
        ans = to_string(diff_h)+ ":" + to_string(diff_m) + " hours before te start";
        }
    }   
    
    return ans;
}