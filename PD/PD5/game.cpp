#include <iostream>
#include <windows.h>
using namespace std;
void printmaze();
void printplayer();
void printenemy();
void printenemy2();
void eraseenemy();
void eraseplayer();
void moveenemy();
void rightmovement();
void leftmovement();
void upmove();
void downmove();
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
char getCharAtxy(short int x, short int y)
{
 CHAR_INFO ci;
 COORD xy = {0, 0};
 SMALL_RECT rect = {x, y, x, y};
 COORD coordBufSize;
 coordBufSize.X = 1;
 coordBufSize.Y = 1;
 return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
: ' ';
}
int ex = 28, ey = 11;
int px = 28, py = 41;
main()
{
    system("cls");
    printmaze();
    printplayer();
    printenemy();
    printenemy2();

    while(true){
        if(GetAsyncKeyState(VK_LEFT)){
            leftmovement();
        }
        if(GetAsyncKeyState(VK_RIGHT)){
            rightmovement();
        }
        if(GetAsyncKeyState(VK_UP)){
            upmove();
        }if(GetAsyncKeyState(VK_DOWN)){
            downmove();
        }
    moveenemy();
    Sleep(100);
   
    }
}
void printmaze()
{
    gotoxy(20, 10);
    cout << "|####||####||####||####||####||####||####||####||####||####||####||####||####||####||####||####||####|  " << endl;
    gotoxy(20, 11);
    cout << "|####|                                                                                          |####| " << endl;
    gotoxy(20, 12);
    cout << "|####|                                                                                          |####|" << endl;
    gotoxy(20, 13);
    cout << "|####|                                                                                          |####| " << endl;
    gotoxy(20, 14);
    cout << "|####|                                                                                          |####|" << endl;
    gotoxy(20, 15);
    cout << "|####|                                                                                          |####|" << endl;
    gotoxy(20, 16);
    cout << "|####||####||####||####||####||####||####||####||####||####||####||####||####|                  |####|" << endl;
    gotoxy(20, 17);
    cout << "|####|                                                                                          |####|" << endl;
    gotoxy(20, 18);
    cout << "|####|                                                                                          |####|" << endl;
    gotoxy(20, 19);
    cout << "|####|                                                                                          |####|  " << endl;
    gotoxy(20, 20);
    cout << "|####|                                                                                          |####|" << endl;
    gotoxy(20, 21);
    cout << "|####|                                                                                          |####|" << endl;
    gotoxy(20, 22);
    cout << "|####|                                    |####||####||####||####||####||####||####||####||####||####| " << endl;
    gotoxy(20, 23);
    cout << "|####|                                                                                          |####|" << endl;
    gotoxy(20, 24);
    cout << "|####|                                                                                          |####|" << endl;
    gotoxy(20, 25);
    cout << "|####|                                                                                          |####|      " << endl;
    gotoxy(20, 26);
    cout << "|####|                                                                                          |####|      " << endl;
    gotoxy(20, 27);
    cout << "|####|                                                                                          |####|  " << endl;
    gotoxy(20, 28);
    cout << "|####||####||####||####||####||####||####|                                                      |####|  " << endl;
    gotoxy(20, 29);
    cout << "|####|                                                                                          |####|      " << endl;
    gotoxy(20, 30);
    cout << "|####|                                                                                          |####|      " << endl;
    gotoxy(20, 31);
    cout << "|####|                                                                                          |####|     " << endl;
    gotoxy(20, 32);
    cout << "|####|                                                                                          |####|      " << endl;
    gotoxy(20, 33);
    cout << "|####|                                                                                          |####|      " << endl;
    gotoxy(20, 34);
    cout << "|####|                                     |####||####||####||####||####||####||####||####||####|####|        " << endl;
    gotoxy(20, 35);
    cout << "|####|                                                                                          |####|      " << endl;
    gotoxy(20, 36);
    cout << "|####|                                                                                          |####|      " << endl;
    gotoxy(20, 37);
    cout << "|####|                                                                                          |####|      " << endl;
    gotoxy(20, 38);
    cout << "|####|                                                                                          |####|      " << endl;
    gotoxy(20, 39);
    cout << "|####|                                                                                          |####|      " << endl;
    gotoxy(20, 40);
    cout << "|####| |####||####||####||####||####||####||####||####||####|                                   |####|      " << endl;
    gotoxy(20, 41);
    cout << "|####|                                                                                          |####|      " << endl;
    gotoxy(20, 42);
    cout << "|####|                                                                                          |####|      " << endl;
    gotoxy(20, 43);
    cout << "|####|                                                                                          |####|      " << endl;
    gotoxy(20, 44);
    cout << "|####|                                                                                          |####|      " << endl;
    gotoxy(20, 45);
    cout << "|####|                                                                                          |####|      " << endl;
    gotoxy(20, 46);
    cout << "|####||####||####||####||####||####||####||####||####||####||####||####||####||####||####||####||####|    " << endl;
}
void printplayer()
{
    gotoxy(px, py);
    cout << "    _==_    " << endl;
    gotoxy(px, py + 1);
    cout << "   |-  -|   " << endl;
    gotoxy(px, py + 2);
    cout << "o,>| -- |<,o" << endl;
    gotoxy(px, py + 3);
    cout << "   /    \\   " << endl;
    gotoxy(px, py + 4);
    cout << "    (  )    " << endl;
}
void printenemy()
{
    gotoxy(ex, ey);
    cout << "    _***_    " << endl;
    gotoxy(ex, ey + 1);
    cout << "   |o   o|   " << endl;
    gotoxy(ex, ey + 2);
    cout << "-<>| -,- |<>-" << endl;
    gotoxy(ex, ey + 3);
    cout << "   /     \\   " << endl;
    gotoxy(ex, ey + 4);
    cout << "   ()  ()    " << endl;
}
void printenemy2()
{
    int ex = 37 , ey = 17;
    gotoxy(ex, ey);
    cout << "    _***_    " << endl;
    gotoxy(ex, ey + 1);
    cout << "   |o   o|   " << endl;
    gotoxy(ex, ey + 2);
    cout << "-<>| -,- |<>-" << endl;
    gotoxy(ex, ey + 3);
    cout << "   /     \\   " << endl;
    gotoxy(ex, ey + 4);
    cout << "   ()  ()    " << endl;
}
void eraseenemy()
{
    gotoxy(ex, ey);
    cout << "             " << endl;
    gotoxy(ex, ey + 1);
    cout << "             " << endl;
    gotoxy(ex, ey + 2);
    cout << "             " << endl;
    gotoxy(ex, ey + 3);
    cout << "             " << endl;
    gotoxy(ex, ey + 4);
    cout << "             " << endl;
}
void eraseenemy2()
{   int ex=37, ey = 17;
    gotoxy(ex, ey);
    cout << "             " << endl;
    gotoxy(ex, ey + 1);
    cout << "             " << endl;
    gotoxy(ex, ey + 2);
    cout << "             " << endl;
    gotoxy(ex, ey + 3);
    cout << "             " << endl;
    gotoxy(ex, ey + 4);
    cout << "             " << endl;
}
void eraseplayer()
{
    gotoxy(px, py);
    cout << "            " << endl;
    gotoxy(px, py + 1);
    cout << "            " << endl;
    gotoxy(px, py + 2);
    cout << "            " << endl;
    gotoxy(px, py + 3);
    cout << "            " << endl;
    gotoxy(px, py + 4);
    cout << "            " << endl;
}

void moveenemy(){

    eraseenemy();
    ex= ex+1;
    if(ex == 50){
        ex = 28;
    }
    
    printenemy();

}
void rightmovement(){
    if (getCharAtxy(px + 13, py) == ' ')
    {
    eraseplayer();
    px = px+1;

    printplayer();
}
}
void leftmovement(){
     if (getCharAtxy(px -1 , py) == ' ')
     {
    eraseplayer();
    px = px-1;

    printplayer();
     }
}
void upmove(){
    if (getCharAtxy(px, py-1) == ' ')
    {
    eraseplayer();
    py = py-1;

    printplayer();
}
}
void downmove(){
     if (getCharAtxy(px, py+5) == ' ')
    {
    eraseplayer();
    py = py+1;

    printplayer();
}

}