#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void printheader();
int select();
int birthday();
int wedding();
int concert();
string name, date, timee;
main()
{
    int opt;

    printheader();

    int type = select();
    if (type == 1)
    {
        birthday();
        int exit = birthday();
        if (exit == 1)
        {
            gotoxy(35,118);
            cout<<"HEY!"<<name <<"WE WILL MANAGE YOUR FUNCTION on "<<date<<" at "<<timee<<endl;
        }
    }
    else if (type == 2)
    {
        wedding();
        int exit = wedding();
        if(exit == 1){
            gotoxy(35,118);
            cout<<"HEY!"<<name <<"WE WILL MANAGE YOUR FUNCTION on "<<date<<" at "<<timee<<endl;
        }
    }
    else if (type == 3)
    {
        concert();
        int exit = concert();
        if(exit == 1){
            gotoxy(35,118);
           cout<<"HEY!"<<name <<"WE WILL MANAGE YOUR FUNCTION on "<<date<<" at "<<timee<<endl;
    }
    }
    else
    {
      cout<<"HEY!"<<name<<" CREATE ANY EVENT ."<<endl;
    }
}

void printheader()
{
    gotoxy(35, 10);
    cout << "           00000       00       00      00000       00     00       0000000                       " << endl;
    gotoxy(35, 11);
    cout << "           0            0       0       0           0  0    0          0           " << endl;
    gotoxy(35, 12);
    cout << "           0000          0     0        00000       0   0   0          0         " << endl;
    gotoxy(35, 13);
    cout << "           0              0   0         0           0    0  0          0                         " << endl;
    gotoxy(35, 14);
    cout << "           00000            0           00000       00     00          0                                " << endl;
    gotoxy(35, 15);
    cout << "                                                                                         " << endl;
    gotoxy(35, 18);
    cout << "           000        00              0000       00     00       00000      00000      000                 " << endl;
    gotoxy(35, 19);
    cout << "           0  00      0              0    0      0  0    0       0          0          0  00   " << endl;
    gotoxy(35, 20);
    cout << "           0000       0              000000      0   0   0       0000       0000       0000    " << endl;
    gotoxy(35, 21);
    cout << "           0          0   00         0    0      0    0  0       0          0          0   0  " << endl;
    gotoxy(35, 22);
    cout << "           0          000000         0    0      00     00       00000      00000      0    0                " << endl;
    gotoxy(35, 23);
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Welcome to EVENT PLANNER (A Man With The Plan).Our Application is a user friendly platform It will smothen your event process.           " << endl;
    cout << "We prioritize our customers at every step, offering a seamless and personalized experience that empowers them to bring their                   " << endl;
    cout << "unique event visions to life.  From elegant weddings to corporate confe From elegant weddings to corporate conferences and                         " << endl;
    cout << "everything in between, our application offers a wide range of tools and features to cater to diverse event needs.                    " << endl;
}

int select()
{
    int opt;
    int req;
    int type;
    gotoxy(35, 31);
    cout << "1: ADMIN                     2:COSTUMER" << endl;
    gotoxy(40, 32);
    cout << "         SELECT OPTION: ";
    cin >> opt;
    if (opt == 1)
    {
        cout << "Enter Password: " << endl;
    }
    else if (opt == 2)
    {
        cout << endl;
        cout << endl;
        cout << "1: Create an Event: " << endl;
        cout << "2: List of Events" << endl;
        cout << "3: Dashbord: " << endl;
        cout << "4: Exit: " << endl;
        cout << "Select your requiremennt: ";
        cin >> req;
    }
    else
    {
        cout << " " << endl;
    }
    if (req == 1)
    {
        
        cout << endl;
        cout << "     Enter your Name: ";
        cin >> name;
        cout << endl;
        cout << "     Enter the Date for Event: ";
        cin >> date;
        cout << endl;
        cout<< "      Enter the time of Event: ";
        cin>> timee;
         gotoxy(35, 48);
        cout << "      _________________   " << endl;
        gotoxy(35, 49);
        cout << "       Types of Event:    " << endl;
         gotoxy(35, 50);
        cout << "      _________________   " << endl;
        cout<<endl;
        cout << "        1: BIRTHDAY PARTY" << endl;
        cout << "        2: WEDDING EVENTS" << endl;
        cout << "        3: CONCERT" << endl;
        cout << endl;
        cout << "Select your required Type: ";
        cin >> type;

        return type;
    }
    else if (req == 2)
    {
        cout<<endl;
        cout << " Types of Event: " << endl;
        cout << "1: BIRTHDAY PARTY" << endl;
        cout << "2: WEDDING EVENTS" << endl;
        cout << "3: CONCERT" << endl;
    }
    else if (req == 3)
    {
        cout << "YOU DON'T HAVE ANY PREVIOUS EVENTS WITH US " << endl;
    }
    else if (req == 4)
    {
        cout << "" << endl;
    }
    else
    {
        cout << "";
    }
}

int birthday()
{
    cout<<endl;
    cout<<endl;
    gotoxy(35, 59);
    cout << "We have the following items in birthday package " << endl;
    cout<<endl;
    cout << "* Ballon Decorated Main Wall" << endl
         << "* Banners of BirthDay boy/girl photographs " << endl
         << "* BirthDay Cake " << endl;
    cout << "* Music System " << endl
         << "* Chairs " << endl
         << "* Tables " << endl
         << "* Party Supplies:Include plates, cups, napkins, utensils, and other disposable tableware." << endl;
    cout << "* Cold Drinks " << endl
         << "* Lighting " << endl;
    cout << "* Waiters " << endl;
    cout << "Your bill will be 10,000 rps" << endl;
    gotoxy(35, 73);
    cout << "If You Want To Add Something Select options   (Applicable only if you have less than 15 persons)" << endl;
    cout<<endl;
    cout << "1: cupcakes                     2,000                  2: Arrangement of Magician      2,000" << endl;
    cout << endl;
    int additionB, totalB;
    cout << "What do you want to add? Enter 1 or 2 or 3(for both) or 4 (for nothing additional)";
    cin >> additionB;
    if (additionB == 1)
    {
        totalB = 10000 + 2000;
    }
    else if (additionB == 2)
    {
        totalB = 10000 + 2000;
    }
    else if (additionB == 3)
    {
        totalB = 10000 + 4000;
    }
    else
    {
        totalB = 10000;
    }
    cout << "Your Total Bill =  " << totalB << endl;
    cout << "Enter 1 to exit ";
    int exit;
    cin >> exit;
    return exit;
}
int wedding()
{
    float totalW;
    float totalF;
    float totalP;
    float totalD;
    gotoxy(35, 59);
    cout << "We have the following items in Wedding package " << endl;
    cout << "* Catering " << endl
         << "* Photographer " << endl
         << "* Decoration" << endl
         << "* Florist " << endl
         << "* Eecutive Bridal Room" << endl;
    cout << "* Music System " << endl
         << "* Chairs " << endl
         << "* Tables " << endl
         << "* Party Supplies:Include plates, cups, napkins, utensils, and other disposable tableware." << endl;
    cout << "* Cold Drinks " << endl
         << "* Lighting " << endl;
    cout << "* Waiters " << endl
         << "* Venue " << endl;
    cout << endl;
    cout << "All these things cost 30,000 RPS." << endl;
    gotoxy(35, 76);
    cout << " Choose Your Flowering Paackage: " << endl;
    cout << endl;
    cout << "1: Lush and Soft Mixed Posy             2: Phalanepsis Orcid Posy              3: Antique Mixed Posy " << endl;
    cout << endl;
    cout << "   A Combination of roses,                 A soft lusious bouquet                Hydrangea in dusty Blue  " << endl;
    cout << "   spray roses, Fressia and                of Singapore Orchids                  Purple, Green and White   " << endl;
    cout << "   small seasonal available                wrapped in a delicate                 Hyacinth florets, roses,   " << endl;
    cout << "   blooms such as Jonquils,                phelaneopsis Orcids.                  Lisanthus in White.        " << endl;
    cout << "      RPS = 5,000                             RPS = 6,000                           RPS = 5,500           " << endl;
    cout << endl;
    int additionF;
    cout << "What one do you want to choose? Enter 1 or 2 or 3 or 4 (for nothing additional)";
    cout << "Enter: ";
    cin >> additionF;
    if (additionF == 1)
    {
        totalF = 5000;
    }
    else if (additionF == 2)
    {
        totalF = 6000;
    }
    else if (additionF == 3)
    {
        totalF = 5500;
    }
    else if (additionF == 4)
    {
        totalF = 0;
    }
    else
    {
        totalF = 0;
    }

    gotoxy(35, 91);
    cout << " Choose Your Photograghy Paackages " << endl;
    cout << endl;
    cout << "1: One hour Bridal Session ,              2: Two hour Bridal Session ,                3: Two hour Bridal Session " << endl;
    cout << "   3 hour Wedding Coverage                   Six hour Wedding Coverage                   8 hour Wedding Coverage   " << endl;
    cout << "   Professional photo enhancement            Online Photo Album                          Disc of all Images   " << endl;
    cout << "      RPS = 3000                                RPS = 4000                                 RPS = 6000           " << endl;
    cout << endl;
    int additionP;
    cout << "What one do you want to choose? Enter 1 or 2 or 3 or 4 (for nothing )";
    cin >> additionP;
    if (additionP == 1)
    {
        totalP = 3000;
    }
    else if (additionP == 2)
    {
        totalP = 4000;
    }
    else if (additionP == 3)
    {
        totalP = 6000;
    }
    else
    {
        totalP = 0;
    }
    gotoxy(35, 100);
    int additionD;
    cout << "We have the following items compulsory in Dinner " << endl;
    cout << endl;
    cout << "* One type of Rice " << endl
         << "* One type of Qorma " << endl
         << "* Appitizer (Russian Salad)" << endl
         << "* Tandori Bread " << endl
         << "* Cold Drinks" << endl;
    cout << "* Ice cream " << endl;
    cout << endl;
    gotoxy(35, 108);
    cout << "You can add things given below" << endl;
    cout << "  1: Additional Appitizer                     2: Additional dinner item                  3: Additional Dessert   " << endl;
    cout << "     Macronie Pasta                              Grilled Fish                               Red fruits cheesecake  " << endl;
    cout << "      RPS = 8,000                                 RPS = 20,000                              RPS = 15,000" << endl;
    cout << endl;
    cout << "You van select 1, 2, 3, 4(for 1 or 2), 5(1 or 3), 6(2 or 3), 7(for all three ) " << endl;
    cout << "Enter: ";
    cin >> additionD;
    cout << endl;
    cout << endl;
    if (additionD == 1)
    {
        totalD = 8000;
    }
    else if (additionD == 2)
    {
        totalD = 20000;
    }
    else if (additionD == 3)
    {
        totalD = 15000;
    }
    else if (additionD == 4)
    {
        totalD = 28000;
    }
    else if (additionD == 5)
    {
        totalD = 23000;
    }
    else if (additionD == 6)
    {
        totalD = 35000;
    }
    else if (additionD == 7)
    {
        totalD = 43000;
    }
    else
    {
        totalD = 0;
    }
    totalW = 30000 + totalF + totalP + totalD;
    cout << "Your total Bill will be : " << totalW<<endl;
    cout<< "For exit type 1: ";
    int type;
    cin>> type;
    return type; 
}
int concert()
{
    gotoxy(35, 55);
    cout << " Choose Your Concert Paackages " << endl;
    cout << endl;
    cout << " 1: GOLD                                                  2:  PLATINUM" << endl;
    cout << "    Hihly Decorated stage                                     Simply Decorated Stage   " << endl;
    cout << "    Setting Arrangement                                       Artist Arrangemnet                          " << endl;
    cout << "    Artist  Arrangement                                       Parking                    " << endl;
    cout << "    Parking                                                   Ticketing Arrangement        " << endl;
    cout << "    Dinner                                                    Dinner is not included   " << endl;
    cout << "    Ticeting System" << endl;
    cout << "        Rps = 40,000                                              Rps = 30,000" << endl;
    cout << endl;
    int additionC;
    cout << "Enter your choice:";
    cin >> additionC;
    if (additionC == 1)
    {
        cout << "Your Total Bill will be 40,000 RPS"<<endl;
    }
    else if (additionC == 2)
    {
        cout << "Your Total Bill will be 30,000 RPS"<<endl;
    }
    else
    {
        cout << "Chooose any one";
    }
    cout<< "For Exit type 1: ";
    int type;
    cin>> type;
    return type;
}