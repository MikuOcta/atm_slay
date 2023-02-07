#include <iostream>
#include <string.h>
#include <conio.h>
#include <cstdlib>
using namespace std;

string lines = "   -----------------------------   ";
string name;
int amount = 0;
int option;
int a;


void NameMenu() 
{

    cout << endl << lines << endl;
    cout << endl << endl << endl;
    cout << "   Hello! Please enter your name!" << endl;
    cout << endl << endl << endl << lines << endl << endl;
    cout << "   "; cin >> name;

}

void Menu() 
{
    
    cout << endl << endl << lines << endl;
    cout << endl; cout << "   Hello " << name << "! Select an option:" << endl << endl;
    cout << " 1.Recieve funds number" << endl;
    cout << " 2.Extract amount" << endl;
    cout << " 3.Call a specialist" << endl;
    cout << " 4.Exit" << endl;
    cout << lines << endl;
    cout << endl;
    cout << "   ";  cin >> option;

}

void PleaseWait()
{
    cout << endl << endl << lines << endl;
    cout << endl << endl << endl;
    cout << "   Please wait..." << endl;
    cout << endl << endl << endl << lines << endl << endl;
    amount -= a;
    _getch();
    system("cls");
}

void Screen1()
{
    int max = 20000; srand(time(0));

    cout << endl << endl << lines << endl;
    cout << endl << endl << endl;

    if (amount == 0) {
        amount = rand() % max;
        cout << "   You have " << amount << " funds in your account" << endl;
    }
    else {
        cout << "   You have " << amount << " funds in your account" << endl;
    }
    cout << "   Press enter to return to the main screen" << endl << endl << endl << lines << endl << endl;
    cin.ignore(INT_MAX, '\n');
    cin.ignore();
}

void Screen2_Screen1()
{
    int max = 20000;  srand(time(0));
    cout << endl << endl << lines << endl;
    cout << endl << endl << endl;
    cout << "   Please enter the amount you would want" << endl;
    cout << "   You currently have ";
    if (amount == 0) {
        amount = rand() % max;
        cout << amount << " dollars.";
    }
    else {
        cout << amount << " dollars.";
    }
    cout << endl << endl << lines << endl << endl;
    cout << "   ";  cin >> a;
    system("cls");

}

void Screen2_Screen2() 
{
    cout << endl << endl << lines << endl;
    cout << endl << endl << endl;
    cout << "   Here are the " << a << " dollars you requested." << endl;
    cout << "   Currently you have " << amount << " dollars left." << endl << "   Press enter to continue."  << endl << lines << endl << endl;
    cin.ignore(INT_MAX, '\n');
    cin.ignore();
}

void Screen3()
{
    cout << endl << endl << lines << endl;
    cout << endl << endl << endl;
    cout << "   Calling someone to help. Please wait..." << endl;
    cout << endl << endl << endl << lines << endl << endl;
    _getch();
    system("cls");
}

int main()
{
 
    int m = 0;

    NameMenu();

    system("cls");

   do {

        Menu();

        system("cls");

        if (option == 1) {
            Screen1();
            system("cls");
        }
        else if (option == 2) {
            Screen2_Screen1();
            PleaseWait();
            Screen2_Screen2();
            system("cls");
        }
        else {
            if (option == 3) {
                Screen3();
            }
            else {
                m += 1;
            }
        }

   } while (m < 1);

    return 0;

}
