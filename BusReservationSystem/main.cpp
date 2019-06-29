#include "Menager.h"
#include "Bus.h"
#include <sstream>

/*
 @@@@@@@@@@@@@@@@@ How to detect an empty int input? @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
https://stackoverflow.com/questions/10959699/how-to-detect-an-empty-int-input
*/
void menu(Menager* m) {
	int run = 1;
	//string s;
	char c;
	int selection = -1;
	do
	{
		cout << "\n			 Welcome to Bus Reservation System C++ Project                     " << endl;

		printf("\n___________________________________________________________________________________\n");
		printf("|Option Number|                            Description                               |\n");
		printf("|_______________|____________________________________________________________________|\n");
		printf("|       1       |Install Bus Information                                             |\n");
		printf("|       2       |Make Reservation                                                    |\n");		
		printf("|       3       |Display Available Buses                                             |\n");
		printf("|       4       |Display Available seats in bus                                      |\n");
		printf("|       0       |Exit program                                                        |\n");
		printf("|_______________|____________________________________________________________________|\n");
		printf("\nWhat do you want to do?\n\n");

		cin >> c;
		//getchar();
		/*
		Simply check if the input is a number first and then keep proccesing.
		*/
		/*while (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Bad entry.  Enter a NUMBER: ";
			std::cin >> selection;
		}
		getchar();*/
		//string s;
		//std::getline(std::cin, s);
		////std::cout << "String is '" << s << "'\n";

		//std::stringstream ss(s);
		//ss >> selection;
		
		//std::cout << "Integer is " << i << "\n";

		switch (c)
		{
		case '0':
			//free allocated memory end terminate program
			run = 0;
			break;
		case '1':
			m->InstallBusInfo();
			break;
		case '2':
			m->MakeReservation();
			break;				
		case '3':
			m->DisplayAvailableBuses();
			break;
		case '4':
			m->DisplayAvailableSeatsInBus();
			break;

		default:
			printf("\nERROR: You did not enter a valid input. Please try again.\n\n");
			break;
		}

	} while (run != 0);

}

int main(void) {
	Menager m = Menager();
	menu(&m);
	return 0;
}