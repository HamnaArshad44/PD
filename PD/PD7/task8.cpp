#include<iostream>
using namespace std;
main()
{
    
   int count = 0;
   int cargoW =0, total_cargo=0, minibus=0, truck=0, train=0 ; 
   float M_per, truck_p, train_p, average;
   cout<<"Enter the count of cargo for transportation: ";
   cin>> count;
    for(int i = 1; i<=count; i++)
    {
        cout<<"Enter the tonnage of cargo "<<i<<": ";
        cin>>cargoW;
        if(cargoW<=3)
        {
            minibus= minibus+cargoW;
            

        }
        else if (cargoW>3 && cargoW<=11)
        {
            truck = truck+cargoW;

        }
        else if(cargoW > 11 )
        {
            train = train+cargoW;
        }
    }
        total_cargo = minibus+ train+ truck;
        float total= (minibus*200)+(truck*175)+(train*120);
        average = total/total_cargo;
        cout<<average<<endl;
        M_per= minibus*100.00/total_cargo;
        truck_p = truck*100.00/total_cargo;
        train_p = train*100.00/total_cargo;
        cout<< M_per<<"%"<<endl;
        cout<< truck_p<<"%"<<endl;
        cout<< train_p<<"%"<<endl;


    }
