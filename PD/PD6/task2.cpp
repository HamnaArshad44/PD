#include <iostream>
using namespace std;
string grade(int percent );
float percentage( float English, float math, float chemistry, float sst, float bio);

main()
{
    float percent, English, math, chemistry, sst, bio ;
    string name;
    cout<<"Enter student name: ";
    cin>> name;
    cout<<"Enter marks for English: ";
    cin>>   English;
    cout<<"Enter marks for Maths: ";
    cin>> math;
    cout<<"Enter marks for Chemistry: ";
    cin>> chemistry;
    cout<<"Enter marks for Social Science: ";
    cin>> sst;
    cout<<"Enter marks for Biology: ";
    cin>> bio;
    percent = percentage( English, math, chemistry, sst, bio);
    string ans = grade(percent);
    cout<< "Student Name: "<< name<<endl;
    cout<< "Percentage: "<<percent<<"%"<<endl;
    cout<< "Grade: "<< ans<<endl; 
}
float percentage( float English, float math, float chemistry, float sst, float bio)
{
    float total = English + math + chemistry + sst+ bio;
    float totalp = (total/500)*100;
    return totalp;
}
string grade(int percent )
{
    string g;
    if(percent >= 90 && percent <=100)
    {
         g = "A+";
    }
    if(percent >= 80 && percent < 90)
    {
         g = "A";
    }
    if(percent >= 70 && percent < 80)
    {
         g = "B+";
    }
    if(percent >= 60 && percent < 70)
    {
         g = "B";
    }
    if(percent >= 50 && percent < 60)
    {
         g = "C";
    }
    if(percent >= 40 && percent < 50)
    {
         g = "D";
    }
    if(percent < 40)
    {
         g = "F";
    }
    return g;
}