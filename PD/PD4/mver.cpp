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
void moveplayer(int x, int y);
int main(){
	int x = 4, y = 4;
	system("cls");
	while(true){
		moveplayer(x,y);
		y = y+1;
		if(y == 21)
	{y = 4;
		}
		  }
			}
void moveplayer(int x, int y)
{
	gotoxy(x, y);
	cout<<"P";
	Sleep(200);
	gotoxy(x, y);
	cout<<" ";
                     }