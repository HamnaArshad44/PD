#include<iostream>
using namespace std;
int compare(string w1, string w2);
main()
{
    string w1, w2;
    cout<<"Enter the first string: ";
    cin>>w1;
     cout<<"Enter the second string: ";
    cin>>w2;
    int ans = compare(w1,w2);
    cout<<"Number of common characters: "<<ans;
}
int compare(string w1, string w2)
{
    int count=0;
      for(int i=0; i<w1.length(); i++)
      {
        for(int j=0; j<w2.length(); j++)
        {
            if(w1[i] == w2[j])
            {
                count++;
                
                for(int k=j; k<w2.length(); k++)
                {
                    w2[k]= w2[k+1];
                }
                break;
            }
           
        }
}
return count;
}