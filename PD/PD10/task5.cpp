#include<iostream>
using namespace std;
string order(int packages[]);
main()
{
    int packages[10];
    cout << "Enter the weights of the 10 packages:"<<endl;
    for (int i = 0; i < 10; i++)
    {
        
        cin >>packages[i];
    }
   
    string ans = order(packages);
    cout<<"Sorted array in ascending order: "<<ans;
}
string order(int packages[])
{
     int ordered[10];

    int count;
    for (int i = 0; i < 10; i++)
    {
        count = 0;
        for (int j = 0; j < 10; j++)
        {

            if (packages[i] > packages[j])
            {

                count++;
            }
        }

        ordered[count] = packages[i];
        
    }
    string ans= "[" +to_string (ordered[0])+", "+to_string(ordered[1])+", "+to_string(ordered[2])+", "+to_string(ordered[3])+", "+to_string(ordered[4])+", "+to_string(ordered[5])+", "+to_string(ordered[6])+", "+to_string(ordered[7])+", "+to_string(ordered[8])+", "+to_string(ordered[9])+"]";
    return ans;
}
