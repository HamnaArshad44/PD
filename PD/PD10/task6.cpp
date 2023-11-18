#include<iostream>
using namespace std;
string reverse(string word);
main()
{
        string word;
        cout << "Enter a string: ";     
        getline(cin, word);
        string ans = reverse(word);
        cout<<"Reversed string: "<< ans;
    
    
}
string reverse(string word)
{
    int count = 0;
    string separate[10];
   
   for (int i=0; i<word.length();i++)
    {
        string newWord="";
        while(word[i]!=' '&& i < word.length())
        {
           newWord=newWord+word[i];
            i++;
          
        } 
        separate[count]=newWord;
        count++;
        
    }
 
     string ans="";
     
    for(int j=count-1; j >= 0; j-- )
    {
        ans +=separate[j]+" ";
    }
  
    return ans;
}
