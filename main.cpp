#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

char userName;

bool gameRunning;

void startup();
void game();
void shutdown();
void mainMenu();

string mainMenuSelection;


void startup()
{
    gameRunning  = true;

    if (gameRunning = true){
        mainMenu();

        if (gameRunning = false){
            system("PAUSE");
        }
    }
}





void shutdown()
{

if (mainMenuSelection == "3"){
gameRunning = false;
system("exit");
}

}

void game(){
    system("COLOR B");
cout << "Hello what is your name" << endl;
cin  >> userName;

}



void mainMenu(){
system("COLOR B");
cout << "\t\t\t\t\t\t Main Menu" << endl;
cout << "\n\n\n\n\n\n____________________________________________________________________________________________________________________" << endl;
cout << "\t\t\t\t\tHello, Welcome to Quest Quest 2!\n\n" << endl;
cout << "\t\t\t\t\t\t1). Start game\n" << endl;
cout << "\t\t\t\t\t\t2). Options\n" << endl;
cout << "\t\t\t\t\t\t3). Quit" << endl;
cout << "____________________________________________________________________________________________________________________\n\n" << endl;
cout << "Made By: Jacob Kasun(PurpleOldMaN)\nVersion 2.0\n\n\n\n" << endl;
cin >> mainMenuSelection;
}



int main()
{
SetConsoleTitle("Quest Quest 2");
system("cls");

system("COLOR b");

mainMenu();

shutdown();









return 0;
}
