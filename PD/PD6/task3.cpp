#include <iostream>
using namespace std;
string sign( int day, string month );
string month ;
int day;
main()
{
    string ans;
    cout<<"Enter the day of birth: ";
    cin>> day;
    cout<<"Enter the month of birth (e.g., January, February): ";
    cin>>   month;
    ans = sign(day, month);
    cout<<"Zodiac Sign: "<< ans<<endl;
}
string sign( int day, string month )
{
    string ans;
    if ((day >=21 &&  month == "March") || (day <= 19 &&  month == "April") )
    {
        ans = "Aries";
    }
    else if ((day >=20 &&  month == "April") || (day <= 20 &&  month == "May") )
    {
        ans = "Taurus";
    }
    else if ((day >=21 &&  month == "May") || (day <= 20 &&  month == "June") )
    {
        ans = "Gemini";
    }
    else if ((day >=21 &&  month == "June") || (day <= 22 &&  month == "July") )
    {
        ans = "Cancer";
    }
    else if ((day >=23 &&  month == "July") || (day <= 22 &&  month == "August") )
    {
        ans = "Leo";
    }
    else if ((day >=23 &&  month == "August") || (day <= 22 &&  month == "September") )
    {
        ans = "Virgo";
    }
    else if ((day >=23 &&  month == "September") || (day <= 22 &&  month == "October") )
    {
        ans = "Libra";
    }
    else if ((day >=23 &&  month == "October") || (day <= 21 &&  month == "November") )
    {
        ans = "Scorpio";
    }
    else if ((day >=22 &&  month == "November") || (day <= 21 &&  month == "December") )
    {
        ans = "Sagittarius";
    }
    else if ((day >=22 &&  month == "December") || (day <= 19 &&  month == "January") )
    {
        ans = "Capricorn";
    }
    else if ((day >=20 &&  month == "January") || (day <= 18 &&  month == "February") )
    {
        ans = "Aquarius";
    }
    else if ((day >=19 &&  month == "February") || (day <= 20 &&  month == "March") )
    {
        ans = "Pisces";
    }
    return ans;
}

