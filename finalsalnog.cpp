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
	int classes;
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
			case 2: // start of case2 (dito yung choose your class)
			while (true){ // eto yung looop for option 4,5,,6 (potek natagalan ako dito mali yung bracket ko koHAHAHAHHA)
			
				system("cls");
				cout << "CHOOSE YOUR CLASS: " << endl;
				cout << "OPTION 1: Warrior (Default)" << endl;
				cout << "OPTION 2: Archer" << endl;
				cout << "OPTION 3: Mage" << endl;
				cout << "\nOPTION 4: VIEW WARRIOR'S STATS" << endl;
				cout << "OPTION 5: VIEW ARCHER'S STATS" << endl;
				cout << "OPTION 6: VIEW MAGE'S STATS" << endl;
				cin >> classes;
				
			if (!cin) {
            cin.clear(); 
            cin.ignore(1000, '\n'); 
            system("cls");
            cout << "Invalid input! Please enter a valid number.\n";
            system("pause"); // nakalimutan ko lagyan to nag-eerror siya pag hindi mo nilagay tapos pag ininput mo letters imbis na numbers nag iinfinite loop for some reason
            continue; // dito mag Retry input
        }
			
			
			
				system("cls");
				switch (classes){ // dito na yung mga prompt after mag input yung mga user kung ano pinili nila sa option hehe
					case 1: 
						cout << "You have chose the Warrior class!" << endl;
						break;
					case 2:
						cout << "You have chose the Archer class!" << endl;
						break;
					case 3:
						cout << "You have chose the Mage class!" << endl;
						break;
					case 4:
						cout << "\nWARRIOR STATS:" << endl;
						cout << "HP: 300" << endl;
						cout << "DMG: 150" << endl;
						cout << "\nThe warrior class is the most balanced class in the game having a ton of HP and dealing decent damage." << endl;
						system("pause"); // DITO MAG LOOP PABALIK SA "CHOOSE YOUR CLASSES"
						continue;
					case 5:
						cout << "\nARCHER STATS:" << endl;
						cout << "HP: 200" << endl;
						cout << "DMG: 220" << endl;
						cout << "\nThe archer class is a long ranged class that packs a punch in damage but has a slighly lower health compared to warrior class." << endl;
						system("pause"); // DITO MAG LOOP PABALIK SA "CHOOSE YOUR CLASSES"
						continue;
					case 6:
						cout << "\nMAGE STATS:" << endl;
						cout << "HP: 150" << endl;
						cout << "DMG: 300" << endl;
						cout << "\nThe mage class deals the most damage when it comes to fighting but their health is really low and they very vulnerable." << endl;
						system("pause"); // DITO MAG LOOP PABALIK SA "CHOOSE YOUR CLASSES"
						continue;
					default:
						cout << "Invalid choice! please choose only on the available options T_T" << endl;
						system("pause");
						continue;
				}
				system("pause");	
				break;
		}
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
