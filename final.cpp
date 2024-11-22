#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <unistd.h>
#define navStyle setw(145)
#define lowStyle setw(70)
#define midStyle setw(110)
#define highStyle setw(180)
using namespace std;

// Styles
void loadDot () {
	cout << lowStyle << "Loading";
	for(int i = 1; i <= 4; i++){
		for(int k = i; k <= i; k++){
			sleep(1);
			cout << "." ;
			if(k == 4){
				system("cls");
				cout << midStyle << "Creating Arena..." << endl;
				sleep(3);
			}
		}
	}
}
// Functions
class Avatar {
public:    
};

// Global Variables
int initiate = 1;

string navigator =
"[1] Start Game "
"[2] Select Class "
"[3] Tree of Wisdom "
"[4] View Credits "
"[0] Exit Program "; 


int main() {
	// Local Variables
	int navigate;
	// Starter
	string name;
	cout << "For a better experience fullscreen the terminal." << endl;
	cout << "Enter your Champion's name: "; cin >> name;
	system("cls");
	cout << midStyle << "Welcome " << name << endl;
	loadDot();
	// Process
	do {
		system("cls");
		cout << midStyle << "GAME TITLE\n\n\n";
		cout << lowStyle << "Logged in as: " << name << endl << endl;
		cout << navStyle << navigator << endl;
		cout << lowStyle << "Navigate: "; cin >> navigate;
		
		switch(navigate){
			case 1:
				{
					
				}
				break;
			case 2:
				
				break;
			case 3:
				
				break;
			case 4:
				system("cls");
				cout << midStyle << "Credits" << endl;
				cout << lowStyle << "Project Manager: " << endl;
				cout << lowStyle << "Programmer: " << endl;
				cout << lowStyle << "Designer: " << endl;
				cout << lowStyle << "Moral support: " << endl;
				cout << lowStyle << "One and only scientist: " << endl;
				system("pause");
				break;
			case 0:
				system("cls");
				cout << "Exiting program" << endl; loadDot();
				sleep(2);
				return 0;
				break;
			default:
				cout << "You've reached default. HOW THE HELL DID YOU MANAGE TO BREAK THE PROGRAM";
				break;
		}
	} while(initiate);
return 0;
}
