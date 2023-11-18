#include<iostream>
using namespace std;
int times(string words[], int size, char l);
main()
{
    int size;
    char letter;
    cout << "Enter how many words you want to enter: ";
    cin >> size;
    if (size <= 0)
    {
        cout << "Invalid Input. Number of words must be greater than 0.";
    }

    string words[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter word " << i+1 << ": ";
        cin >> words[i];
    }
    cout<<"Enter the letter you want to count: ";
    cin>>letter;
   
    int ans = times(words,size,letter);
    cout<<letter<<" shows up "<<ans<<" times in the data.";
}
int times(string words[], int size,char l)
{
 string word;   
 int count = 0;
    for(int i=0;i<size;i++)
    {
       word = words[i];  
       for(int j=0;j<word.length();j++)
       {
        
            if(word[j]==l)
            {
                count++;
            }
       }
    }
    return count;
       
}
