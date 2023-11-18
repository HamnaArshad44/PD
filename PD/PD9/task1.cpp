#include<iostream>
using namespace std;
bool isEven(string name);
main()
{
    string name;
    cout<<"Enter a String: ";
    cin>>name;
    cout<< isEven(name)<<endl;

}
bool isEven(string name)
{
      int size= name.length();
      if(size%2 == 0)
      {
        return true;
      }
      else{
        return false;
      }
}