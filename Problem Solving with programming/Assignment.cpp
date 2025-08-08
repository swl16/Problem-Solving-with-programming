#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void Menu() {
	cout << "\nWelcome to TWD Train Ticket Booking System!\n";
	cout << "Please choose. (1-3)\n";
	cout << "1. BUY TICKET \n";
	cout << "2. CONTACT US \n";
	cout << "3. EXIT \n";
}

int main()
{
	cout << "    __________  \n";
	cout << "   / |        | \n";
	cout << "  /--         | \n";
	cout << "  |           | \n";
	cout << "   -----------  \n";
	cout << "    000   000   \n";

	cout << "\nWelcome to TWD Train Ticket Booking System!\n\n";

	string user_name, email, ic_number;
	int phone_number;

	cout << "Please fill in your personal's infomation before you book your train ticket. \n\n";
	cout << "---------------------------------------------------------------------------------\n";
	cout << "PASSENGER INFOMATION  \n";
	cout << "User Name (as per IC) : ";
	getline(cin, user_name);
	cout << "IC Number / Passport Number (without -) : ";
	cin >> ic_number;

	cout << "\nCONTACT INFOMATION\n";
	cout << "Phone number (without -) : +60";
	cin >> phone_number;
	cout << "Email : ";
	cin >> email;

	char choice;
	do {
		cout << "\nPlease confirm that the information is correct.";

		cout << "Y/N?";
		cin >> choice;
		if (choice == 'N' || choice == 'n') {
			cout << "\nGoing back to menu.\n\n";
			cout << "PASSENGER INFOMATION  \n";
			cout << "User Name (as per IC) : ";
			cin.ignore();
			getline(cin, user_name);
			cout << "IC Number / Passport Number (without -) : ";
			cin >> ic_number;

			cout << "\nCONTACT INFOMATION\n";
			cout << "Phone number (without -) : +60";
			cin >> phone_number;
			cout << "Email : ";
			cin >> email;
		}
		else if (choice == 'Y' || choice == 'y') {
			break;
		}
		else {
			cout << "Invalid Input!";
		}
	} while (choice != 'Y' && choice != 'y');



	cout << "\nThis is the infomation.\n\n";
	cout << "Name : " << user_name << endl;
	cout << "IC Number / Passport Number : " << ic_number << endl;
	cout << "Phone Number : +60" << phone_number << endl;
	cout << "Email : " << email << endl;

	cout << "\nPress ENTER to continue.";
	cin.ignore();
	cin.get();

	int menu_choose;
	

	do{
		Menu();
		cin >> menu_choose;

		if (menu_choose == 1) {
			/*goto Statement1;*/
			char origin1;
			cout << "ORIGIN\n";
			cout << "a)Selangor\n";
			cout << "b)Penang\n";
			cout << "c)Melaka\n";
			cout << "d)Johor\n";
			cout << "Please choose you origin : ";
			cin >> origin1;

			if (origin1 == 'a' || origin1 == 'A') {
				int selangor1;
				cout << "1.Kajang\n2.Rawang\n3.Klang\n4.Shah Alam\n";
				cin >> selangor1;
			}
      
			else if (origin1 == 'b' || origin1 == 'B') {
				int penang1;
				cout << "1.Butterworth\n";
				cin >> penang1;
			}
			else if (origin1 == 'c' || origin1 == 'C') {
				int melaka1;
				cout << "1.Melaka City\n";
				cin >> melaka1;
			}
			else if (origin1 == 'd' || origin1 == 'D') {
				int johor1;
				cout << "1.Johor Bahru\n2.Batu Pahat\n3.Muar\n";
				cin >> johor1;
			}
			else {
				cout << "Invalid Input!";
			}

			char destination;
			cout << "Please choose you destination.\n";
			cout << "a)Selangor\n";
			cout << "b)Penang\n";
			cout << "c)Melaka\n";
			cout << "d)Johor\n";
			cout << "Please choose you destination : ";
			cin >> destination;

			if (destination == 'a' || destination == 'A') {
				int selangor2;
				cout << "1.Kajang\n2.Rawang\n3.Klang\n4.Shah Alam\n";
				cin >> selangor2;
			}

			else if (destination == 'b' || destination == 'B') {
				int penang2;
				cout << "1.Butterworth\n";
				cin >> penang2;
			}
			else if (destination == 'c' || destination == 'C') {
				int melaka2;
				cout << "1.Melaka City\n";
				cin >> melaka2;
			}
			else if (destination == 'd' || destination == 'D') {
				int johor2;
				cout << "1.Johor Bahru\n2.Batu Pahat\n3.Muar\n";
				cin >> johor2;
			}
			else {
				cout << "Invalid Input!";
			}

			int time;
			cout << "DEPARTURE TIME\n";
			cout << "1.  10:00 a.m." << endl;
			cout << "2.  13:00 p.m." << endl;
			cout << "3.  15:00 p.m." << endl;
			cin >> time;
		}
		else if (menu_choose == 2) {
			cout << "\nCONTACT US\n";
			cout << "Call/Whatsapp : 012-3456789\n";
			cout << "Email : abc123@gmail.com\n";
			cout << "Press ENTER to back to Main Menu.";
			cin.ignore();
			cin.get();
		}
		else if (menu_choose == 3) {
			cout << "THANK YOU! Have a nice day.";
			return 1;
		}
		else {
			cout << "Invalid Input! \n";
			cout << "Going back to main menu.\n";
		}
	} while (menu_choose != 3);



	return 0;
}



	

