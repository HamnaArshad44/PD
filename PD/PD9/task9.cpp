#include <iostream>
using namespace std;
bool segment_7(string newWord);
string newArr(string words[], int size);
string longest(string newWord[], int size);
main()
{
    int size;
    cout << "Enter the number of words: ";
    cin >> size;
    if (size <= 0)
    {
        cout << "Invalid Input. Number of words must be greater than 0.";
    }

    string words[size];
    cout << "Enter the words, one by one: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin >> words[i];
    }
    string result=newArr(words, size);
    cout<<"Longest 7-segment word: "<<result<<endl;
}
bool segment_7(string Word)
{
    string letter = Word;
    int count = 0;

    for (int j = 0; j < letter.length(); j++)
    {
        if (letter[j] == 'w' || letter[j] == 'k' || letter[j] == 'm' || letter[j] == 'v' || letter[j] == 'x')
        {
            count++;
        }
    }

    if (count == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
string newArr(string words[], int size)
{
    int newIndex = 0;
    
    
    string newWord[size];

    for (int i = 0; i < size; i++)
    {

        if (segment_7(words[i]))
        {

            newWord[newIndex] = words[i];

            newIndex++;
            
        }
    }
    for(int i = 0; i< newIndex; i++)
    {
        cout << newWord[i] << endl;
    }
    string large=longest(newWord,newIndex);
    
    return large;
}
string longest(string newWord[], int x)
{
    
    string largest = newWord[0];
    int maxidx = 0;
    int maxValue = newWord[0].length();
    for (int i = 1; i < x; i++)
    {
       if(maxValue<newWord[i].length())
        {
            maxidx=i;
            maxValue = newWord[i].length();
        }
    }
    largest= newWord[maxidx];
   
    return largest;
}