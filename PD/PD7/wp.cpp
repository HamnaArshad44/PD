#include<iostream>
using namespace std;
void printstars(int);
main()
    {
        int rowsize;
        cout<<"Enter desired number of rows: ";
        cin>>rowsize;
        printstars(rowsize);
    }
    void printstars(int rowsize)
    {
        for(int i=1; i<=rowsize; i++)
        {
            for(int j=1; j<=i; j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
    }
