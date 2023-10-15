#include<iostream>
using namespace std;

int x = 10;
void myfunction(){
    int x = 20;
    cout<< "The value of the x is: "<<x;

}
main(){
    myfunction();
    int x = 30;
    cout<< "The value of the x is: "<<x;
    myfunction();
}