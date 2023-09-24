#include<iostream>
using namespace std;
main() {
	float velocity;
	float acc;
	float time;
	float final;
	cout<< "Enter Initial Velocity (m/s): ";
	cin>>velocity;
	cout<< "Enter Acceleration (m/s^2): ";
	cin>>acc;
	cout<< "Enter Time (s): ";
	cin>>time;
	final = (acc*time)+velocity;
	cout<<"Final Velocity (m/s): "<<final;
}