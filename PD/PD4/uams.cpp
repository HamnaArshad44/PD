#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void printmenu();
void calculateAgg(string name, float matric, float inter, float ecat);
void comparemarks(string n1, string n2, float m1, float m2);
main(){
	string name, n1, n2;
	float matric, inter, ecat, m1, m2;
	printmenu();
	cout<<" "<<endl;
	int R;
	gotoxy(30,20);
	cout<< " 1-Calculating Aggregate.         2-Alloting Roll No.";
	gotoxy(38,22);
	cout<<"Enter your Requirement:";
	cin>> R;
	if(R==1){
	calculateAgg(name, matric, inter, ecat);
	cout<<endl;
	cout<<endl;
		    }
	if(R==2)
	{
	comparemarks(n1, n2, m1,m2);
					  }
}
void printmenu(){
	system("cls");
	gotoxy(38,10);
	cout<<" #    #    ####   ##   ##    ####           "<<endl;
	gotoxy(38,11);
	cout<<" #    #   #    #  # # # #   ##         "<<endl;
	gotoxy(38,12);
	cout<<" #    #   ######  #  #  #     ##       "<<endl;
	gotoxy(38,13);
	cout<<" #    #   #    #  #     #       ##     " <<endl;
	gotoxy(38,14);
	cout<<"  ####    #    #  #     #    ####     "<<endl;
	gotoxy(38,15);
	cout<<endl;
	gotoxy(38,17);
	cout<<"UNIVERSITY ADMISSION MANAGEMENT SYSTEM "<<endl;
	
}
void calculateAgg(string name, float matric, float inter, float ecat){
	gotoxy(50,25);
	cout<<" YOUR AGGREGATE"<<endl;
	cout<<endl;
	cout<< "Enter your name :";
	cin>> name;
	cout<<"Enter your matric marks: ";
	cin>> matric;
	cout<<"Enter your inter marks: ";
	cin>> inter;
	cout<<"Enter your ecat marks: ";
	cin>>ecat;
	float agg;
	agg = (((matric/1100)*0.3)+((inter/550)*0.3)+((ecat/400)*0.4))*100;
	cout<<"Your Aggregate: "<<agg<<endl;
				  }
void comparemarks(string n1, string n2, float m1, float m2){
	gotoxy(50,25);
	cout<<" ALLOTTING ROLL NO "<<endl;
	cout<<endl;
	cout<<"Enter the name of student 1: ";
	cin>> n1;
	cout<<"Enter the ecat marks of student 1: ";
	cin >> m1;
	cout<<"Enter the name of Student 2: ";
	cin>> n2;
	cout<<"Enter the ecat marks of student 2: ";
	cin>> m2;
	if(m1>m2){
	cout<< n1<<" have First roll no."; 
		 			   }
	if(m2>m1){
	cout<< n2<<" have First roll no.";
					   }
	if(m1==m2){
	cout<<" Both have equal marks";
					}

}









