#include <iostream>
#include<cmath>
using namespace std;
float plays(string type, int h, int w);

main()
{
    int h, w;
    string type;
    float ans;
    cout << "Enter year type: ";
    cin >> type;
    cout << "Enter number of holidays: ";
    cin >> h;
    cout << "Enter number of weekends: ";
    cin >> w;
    ans = plays(type, h, w);
    cout<< ceil(ans) ;
}
float plays(string type, int h, int w)
{
     float play_s, play_hometown, total_plays, play_holidays;
     play_s = (48 - w)*3/4;
     play_hometown = 48- (48-w);
     play_holidays = h*2/3;
     total_plays = play_s + play_holidays+ play_hometown;
     if(type == "normal")
    {
        total_plays = total_plays; 
         
    }
     if(type == "leap")
     {
        total_plays = total_plays + (total_plays *0.15);
       
     }    
     return total_plays;
}