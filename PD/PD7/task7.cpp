#include<iostream>
using namespace std;
main()
{
     int days, patients,  doctors=7, treated_p=0, untreated_p=0;
     cout<<"Enter number of days you visited Hospital: ";
     cin>>days;
     for(int i = 1; i <= days; i++)
     {
        if(i%3 == 0)
        {
            doctors++;
        }
        cout<< "Number of patients who visited hospital on Day "<<i<<" : ";
        cin>> patients;

        if(patients<=doctors) 
        {
            treated_p = treated_p + patients;
           
        }
        else if(patients> doctors)
        {
            treated_p = treated_p + doctors;
            untreated_p =untreated_p + patients - doctors;
        
        }

     }
     cout<<"Treated patients: "<<treated_p<<endl;
     cout<<"Untreated patients: "<< untreated_p<<endl;
}