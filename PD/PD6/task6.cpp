#include <iostream>
using namespace std;
float appartment(string month, int days);
float studio(string month, int days);

main()
{
    string month;
    int days;
    float ans1, ans2;
    cout << "Enter the month (May, June, July, August, September, October): ";
    cin >> month;
    cout << "Enter the number of stays: ";
    cin >> days;
    ans1 = appartment(month, days);
    cout << "Appartment: "<< ans1<<"$."<<endl;
    ans2 = studio(month, days);
    cout<<"Studio: "<< ans2<<"$."<<endl;
}
float appartment(string month, int days)
{
    float ans1;
    if((month == "May" || month == "October")&& days <=14)
    {
        ans1 = days*65;
    }
    
    else if((month == "May" || month == "October")&& days > 14)
    {
        ans1 = (days*65)-(days*65*0.1);
    }
    
    else if((month == "June" || month == "September")&& days <=14)
    {
        ans1 = days * 68.70;
    }
    
    else if((month == "June" || month == "September")&& days > 14)
    {
        ans1 = ( days*68.70)-(days*68.70*0.1);
    }
    else if(month == "July" || month == "August" && days <= 14)
    {
        ans1 = days*77;
    }
    else if(month == "July" || month == "August" && days > 14)
    {
        ans1 = (days*77)-  (days*77*0.1);
    }
    else{
        ans1 = 0;
    }
    
    
    
    return ans1;
}
float studio(string month, int days)
{
    float ans2;

    if((month == "May" || month == "October")&& days <= 7)
    {
        ans2 = days * 50;
    }
     
    else if((month == "May" || month == "October")&& days > 7 && days <= 14)
    {
        ans2 =(days*50)- (days*50*0.05);
    }
    else if((month == "May" || month == "October")&& days > 14)
    {
        ans2 =(days*50)- (days*50*0.3);
    }
     
    else if((month == "June" || month == "September")&& days <=14)
    {
        ans2 = days * 75.20 ;
    }
     
    else if((month == "June" || month == "September")&& days > 14)
    {
        ans2 =(days*75.20) - (days*75.20*0.2);
    } 
    else if(month == "July" || month == "August")
    {
        ans2 = days*76;
    }
    else {
        ans2 = 0;
    }
        
    return ans2;
}