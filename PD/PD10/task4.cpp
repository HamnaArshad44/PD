#include<iostream>
using namespace std;
int volume(int boxes[], int nboxes );
main()
{
    int nboxes ;
    cout << "Enter the number of boxes: ";
    cin >> nboxes ;
    if (nboxes  <= 0)
    {
        cout << "Invalid Input. Number of boxes must be greater than 0.";
    }

    int boxes[100];
     int size=nboxes*3;
    cout<<"Enter the dimensions of the boxes (length, width, height): "<<endl;
    for (int i = 0; i < size; i++)
    {
        
        cin >> boxes[i];
    }
  
    int ans = volume(boxes,nboxes);
    cout<<"Total volume of all boxes: "<<ans;
}
int volume(int boxes[], int nboxes)
{
    int sum=0;
    int mul=1;
    
    for(int i=0;i< nboxes*3; i = i+3)
    {
        mul=1;
       mul=boxes[i]*boxes[i+1]*boxes[i+2];
      sum=sum+mul;
       
        
    }
       
        return sum;
}
