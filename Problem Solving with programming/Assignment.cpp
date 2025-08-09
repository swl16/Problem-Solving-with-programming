#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void Menu() {
	cout << "\nWelcome to TWD Train Ticket Booking System!\n";
	cout << "1. BUY TICKET \n";
	cout << "2. CONTACT US \n";
	cout << "3. EXIT \n";
	cout << endl;
	cout << "Please choose. (1-3): \n";
}

int main()
{
	cout << "                                              ____ \n";
	cout << "    __________   ========  |      __      |  |    |       \n";
	cout << "   / |        |     ||     |     |  |     |  |     |      \n";
	cout << "  /--         |     ||     |    |    |    |  |      |   \n";
	cout << "  |           |     ||     |   |      |   |  |       |   \n";
	cout << "   -----------      ||     |__|        |__|  |_______|    \n";
	cout << "    000   000                                          \n";

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
	
	int trainno, deptime, deptime1, deptime2, ftime, pax;
	string date1, date2;
	char choice1;
	char choice2;
	double money = 0.0;

	do{
		Menu();
		cin >> menu_choose;

		if (menu_choose == 1) {
				cout << "AVAILABLE TRAIN:\n\n";
				cout << left << setw(10) << "Train No" << setw(15) << "ORIGIN" << setw(15) << "DESTINATION" << endl;
				cout << left << setw(10) << "001" << setw(15) << "Kuala Lumpur" << setw(15) << "Butterworth" << endl;
				cout << left << setw(10) << "002" << setw(15) << "Kajang" << setw(15) << "JB Sentral" << endl;
				cout << left << setw(10) << "003" << setw(15) << "KL Sentral" << setw(15) << "Ipoh" << endl;

				cout << "\nPlease choose your train number : ";
				cin >> trainno;
				cout << endl;

				switch (trainno) {
				case 1:
					cout << left << setw(5) << "NO" << setw(15) << "DEPARTURE TIME" << setw(15) << "MIN.FARE" << endl;
					cout << left << setw(5) << "1" << setw(15) << "10:00AM" << setw(15) << "RM 96.00" << endl;
					cout << left << setw(5) << "2" << setw(15) << "12:00PM" << setw(15) << "RM 96.00" << endl;
					cout << left << setw(5) << "3" << setw(15) << "15:00PM" << setw(15) << "RM 96.00" << endl;
					cout << "\nPlease choose your departure time : ";
					cin >> deptime;
					if (deptime == 1) {
						ftime = 10.00;
						money = 96.00;
					}
					else if (deptime == 2) {
						ftime = 12.00;
						money = 96.00;
					}
					else if (deptime == 3) {
						ftime = 15.00;
						money = 96.00;
					}
					break;
				case 2:
					cout << left << setw(5) << "NO" << setw(15) << "DEPARTURE TIME" << setw(15) << "MIN.FARE" << endl;
					cout << left << setw(5) << "1" << setw(15) << "10:00AM" << setw(15) << "RM 50.00" << endl;
					cout << left << setw(5) << "2" << setw(15) << "13:00PM" << setw(15) << "RM 50.00" << endl;
					cout << left << setw(5) << "3" << setw(15) << "16:00PM" << setw(15) << "RM 50.00" << endl;
					cout << "\nPlease choose your departure time : ";
					cin >> deptime1;
					if (deptime1 == 1) {
						ftime = 10.00;
						money = 50.00;
					}
					else if (deptime1 == 2) {
						ftime = 13.00;
						money = 50.00;
					}
					else if (deptime1 == 3) {
						ftime = 16.00;
						money = 50.00;
					}
					break;
				case 3:
					cout << left << setw(5) << "NO" << setw(15) << "DEPARTURE TIME" << setw(15) << "MIN.FARE" << endl;
					cout << left << setw(5) << "1" << setw(15) << "11:00AM" << setw(15) << "RM 56.00" << endl;
					cout << left << setw(5) << "2" << setw(15) << "14:00PM" << setw(15) << "RM 56.00" << endl;
					cout << left << setw(5) << "3" << setw(15) << "16:00PM" << setw(15) << "RM 56.00" << endl;
					cout << "\nPlease choose your departure time : ";
					cin >> deptime2;
					if (deptime2 == 1) {
						ftime = 11.00;
						money = 56.00;
					}
					else if (deptime2 == 2) {
						ftime = 14.00;
						money = 56.00;
					}
					else if (deptime2 == 3) {
						ftime = 16.00;
						money = 56.00;
					}
					break;
				default:
					cout << "Invalid";
					break;
				}
				cout << endl;
				cout << "Departure date : ";
				cin >> date1;
				cout << "Number of pax : ";
				cin >> pax;

				cout << "\nTICKET CONFIRMATION" << endl;
				cout << "--------------------" << endl;
				cout << "Train No : " << trainno << endl;
				cout << "Departure Time : " << ftime << ":00";
				if (ftime >= 12) {
					cout << "PM\n";
				}
				else {
					cout << "AM\n";
				}
				cout << "Departure Date : " << date1 << endl;
				cout << "Number of pax : " << pax << endl;
				cout << "Price : RM" << money << ".00" << endl;

				do {
					cout << "\nPlease confirm your ticket is correct(Y/N) : ";
					cin >> choice1;
					cout << endl;

					if (choice1 == 'n' || choice1 == 'N') {
						cout << "AVAILABLE TRAIN:\n\n";
						cout << left << setw(10) << "Train No" << setw(15) << "ORIGIN" << setw(15) << "DESTINATION" << endl;
						cout << left << setw(10) << "001" << setw(15) << "Kuala Lumpur" << setw(15) << "Butterworth" << endl;
						cout << left << setw(10) << "002" << setw(15) << "Kajang" << setw(15) << "JB Sentral" << endl;
						cout << left << setw(10) << "003" << setw(15) << "KL Sentral" << setw(15) << "Ipoh" << endl;

						cout << "\nPlease choose your train number : ";
						cin >> trainno;
						cout << endl;

						switch (trainno) {
						case 1:
							cout << left << setw(5) << "NO" << setw(15) << "DEPARTURE TIME" << setw(15) << "MIN.FARE" << endl;
							cout << left << setw(5) << "1" << setw(15) << "10:00AM" << setw(15) << "RM 96.00" << endl;
							cout << left << setw(5) << "2" << setw(15) << "12:00PM" << setw(15) << "RM 96.00" << endl;
							cout << left << setw(5) << "3" << setw(15) << "15:00PM" << setw(15) << "RM 96.00" << endl;
							cout << "\nPlease choose your departure time : ";
							cin >> deptime;
							if (deptime == 1) {
								ftime = 10.00;
								money = 96.00;
							}
							else if (deptime == 2) {
								ftime = 12.00;
								money = 96.00;
							}
							else if (deptime == 3) {
								ftime = 15.00;
								money = 96.00;
							}
							break;
						case 2:
							cout << left << setw(5) << "NO" << setw(15) << "DEPARTURE TIME" << setw(15) << "MIN.FARE" << endl;
							cout << left << setw(5) << "1" << setw(15) << "10:00AM" << setw(15) << "RM 50.00" << endl;
							cout << left << setw(5) << "2" << setw(15) << "13:00PM" << setw(15) << "RM 50.00" << endl;
							cout << left << setw(5) << "3" << setw(15) << "16:00PM" << setw(15) << "RM 50.00" << endl;
							cout << "\nPlease choose your departure time : ";
							cin >> deptime1;
							if (deptime1 == 1) {
								ftime = 10.00;
								money = 50.00;
							}
							else if (deptime1 == 2) {
								ftime = 13.00;
								money = 50.00;
							}
							else if (deptime1 == 3) {
								ftime = 16.00;
								money = 50.00;
							}
							break;
						case 3:
							cout << left << setw(5) << "NO" << setw(15) << "DEPARTURE TIME" << setw(15) << "MIN.FARE" << endl;
							cout << left << setw(5) << "1" << setw(15) << "11:00AM" << setw(15) << "RM 56.00" << endl;
							cout << left << setw(5) << "2" << setw(15) << "14:00PM" << setw(15) << "RM 56.00" << endl;
							cout << left << setw(5) << "3" << setw(15) << "16:00PM" << setw(15) << "RM 56.00" << endl;
							cout << "\nPlease choose your departure time : ";
							cin >> deptime2;
							if (deptime2 == 1) {
								ftime = 11.00;
								money = 56.00;
							}
							else if (deptime2 == 2) {
								ftime = 14.00;
								money = 56.00;
							}
							else if (deptime2 == 3) {
								ftime = 16.00;
								money = 56.00;
							}
							break;
						default:
							cout << "Invalid";
							break;
						}
						cout << endl;
						cout << "Departure date : ";
						cin >> date1;
						cout << "Number of pax : ";
						cin >> pax;

						cout << "\nTICKET CONFIRMATION" << endl;
						cout << "--------------------" << endl;
						cout << "Train No : " << trainno << endl;
						cout << "Departure Time : " << ftime << ":00";
						if (ftime >= 12) {
							cout << "PM\n";
						}
						else {
							cout << "AM\n";
						}
						cout << "Departure Date : " << date1 << endl;
						cout << "Number of pax : " << pax << endl;
						cout << "Price : RM" << money << ".00" << endl;
					}
					else if (choice1 == 'y' || choice1 == 'Y') {
						break;
					}
					else {
						cout << "Invalid" << endl;
					}
				} while (choice1 != 'y' || choice1 != 'Y');

				do {
					cout << "Do you need to add on?(Y/N) : ";
					cin >> choice2;
					cout << endl;

					if (choice2 == 'y' || choice2 == 'Y') {
						cout << "AVAILABLE TRAIN:\n\n";
						cout << left << setw(10) << "Train No" << setw(15) << "ORIGIN" << setw(15) << "DESTINATION" << endl;
						cout << left << setw(10) << "001" << setw(15) << "Kuala Lumpur" << setw(15) << "Butterworth" << endl;
						cout << left << setw(10) << "002" << setw(15) << "Kajang" << setw(15) << "JB Sentral" << endl;
						cout << left << setw(10) << "003" << setw(15) << "KL Sentral" << setw(15) << "Ipoh" << endl;

						cout << "\nPlease choose your train number : ";
						cin >> trainno;
						cout << endl;

						switch (trainno) {
						case 1:
							cout << left << setw(5) << "NO" << setw(15) << "DEPARTURE TIME" << setw(15) << "MIN.FARE" << endl;
							cout << left << setw(5) << "1" << setw(15) << "10:00AM" << setw(15) << "RM 96.00" << endl;
							cout << left << setw(5) << "2" << setw(15) << "12:00PM" << setw(15) << "RM 96.00" << endl;
							cout << left << setw(5) << "3" << setw(15) << "15:00PM" << setw(15) << "RM 96.00" << endl;
							cout << "\nPlease choose your departure time : ";
							cin >> deptime;
							if (deptime == 1) {
								ftime = 10.00;
								money = 96.00;
							}
							else if (deptime == 2) {
								ftime = 12.00;
								money = 96.00;
							}
							else if (deptime == 3) {
								ftime = 15.00;
								money = 96.00;
							}
							break;
						case 2:
							cout << left << setw(5) << "NO" << setw(15) << "DEPARTURE TIME" << setw(15) << "MIN.FARE" << endl;
							cout << left << setw(5) << "1" << setw(15) << "10:00AM" << setw(15) << "RM 50.00" << endl;
							cout << left << setw(5) << "2" << setw(15) << "13:00PM" << setw(15) << "RM 50.00" << endl;
							cout << left << setw(5) << "3" << setw(15) << "16:00PM" << setw(15) << "RM 50.00" << endl;
							cout << "\nPlease choose your departure time : ";
							cin >> deptime1;
							if (deptime1 == 1) {
								ftime = 10.00;
								money = 50.00;
							}
							else if (deptime1 == 2) {
								ftime = 13.00;
								money = 50.00;
							}
							else if (deptime1 == 3) {
								ftime = 16.00;
								money = 50.00;
							}
							break;
						case 3:
							cout << left << setw(5) << "NO" << setw(15) << "DEPARTURE TIME" << setw(15) << "MIN.FARE" << endl;
							cout << left << setw(5) << "1" << setw(15) << "11:00AM" << setw(15) << "RM 56.00" << endl;
							cout << left << setw(5) << "2" << setw(15) << "14:00PM" << setw(15) << "RM 56.00" << endl;
							cout << left << setw(5) << "3" << setw(15) << "16:00PM" << setw(15) << "RM 56.00" << endl;
							cout << "\nPlease choose your departure time : ";
							cin >> deptime2;
							if (deptime2 == 1) {
								ftime = 11.00;
								money = 56.00;
							}
							else if (deptime2 == 2) {
								ftime = 14.00;
								money = 56.00;
							}
							else if (deptime2 == 3) {
								ftime = 16.00;
								money = 56.00;
							}
							break;
						default:
							cout << "Invalid";
							break;
						}
						cout << endl;
						cout << "Departure date : ";
						cin >> date1;
						cout << "Number of pax : ";
						cin >> pax;

						cout << "\nTICKET CONFIRMATION" << endl;
						cout << "--------------------" << endl;
						cout << "Train No : " << trainno << endl;
						cout << "Departure Time : " << ftime << ":00";
						if (ftime >= 12) {
							cout << "PM\n";
						}
						else {
							cout << "AM\n";
						}
						cout << "Departure Date : " << date1 << endl;
						cout << "Number of pax : " << pax << endl;
						cout << "Price : RM" << money << ".00" << endl;

						do {
							cout << "\nPlease confirm your ticket is correct(Y/N) : ";
							cin >> choice1;
							cout << endl;

							if (choice1 == 'n' || choice1 == 'N') {
								cout << "AVAILABLE TRAIN:\n\n";
								cout << left << setw(10) << "Train No" << setw(15) << "ORIGIN" << setw(15) << "DESTINATION" << endl;
								cout << left << setw(10) << "001" << setw(15) << "Kuala Lumpur" << setw(15) << "Butterworth" << endl;
								cout << left << setw(10) << "002" << setw(15) << "Kajang" << setw(15) << "JB Sentral" << endl;
								cout << left << setw(10) << "003" << setw(15) << "KL Sentral" << setw(15) << "Ipoh" << endl;

								cout << "\nPlease choose your train number : ";
								cin >> trainno;
								cout << endl;

								switch (trainno) {
								case 1:
									cout << left << setw(5) << "NO" << setw(15) << "DEPARTURE TIME" << setw(15) << "MIN.FARE" << endl;
									cout << left << setw(5) << "1" << setw(15) << "10:00AM" << setw(15) << "RM 96.00" << endl;
									cout << left << setw(5) << "2" << setw(15) << "12:00PM" << setw(15) << "RM 96.00" << endl;
									cout << left << setw(5) << "3" << setw(15) << "15:00PM" << setw(15) << "RM 96.00" << endl;
									cout << "\nPlease choose your departure time : ";
									cin >> deptime;
									if (deptime == 1) {
										ftime = 10.00;
										money = 96.00;
									}
									else if (deptime == 2) {
										ftime = 12.00;
										money = 96.00;
									}
									else if (deptime == 3) {
										ftime = 15.00;
										money = 96.00;
									}
									break;
								case 2:
									cout << left << setw(5) << "NO" << setw(15) << "DEPARTURE TIME" << setw(15) << "MIN.FARE" << endl;
									cout << left << setw(5) << "1" << setw(15) << "10:00AM" << setw(15) << "RM 50.00" << endl;
									cout << left << setw(5) << "2" << setw(15) << "13:00PM" << setw(15) << "RM 50.00" << endl;
									cout << left << setw(5) << "3" << setw(15) << "16:00PM" << setw(15) << "RM 50.00" << endl;
									cout << "\nPlease choose your departure time : ";
									cin >> deptime1;
									if (deptime1 == 1) {
										ftime = 10.00;
										money = 50.00;
									}
									else if (deptime1 == 2) {
										ftime = 13.00;
										money = 50.00;
									}
									else if (deptime1 == 3) {
										ftime = 16.00;
										money = 50.00;
									}
									break;
								case 3:
									cout << left << setw(5) << "NO" << setw(15) << "DEPARTURE TIME" << setw(15) << "MIN.FARE" << endl;
									cout << left << setw(5) << "1" << setw(15) << "11:00AM" << setw(15) << "RM 56.00" << endl;
									cout << left << setw(5) << "2" << setw(15) << "14:00PM" << setw(15) << "RM 56.00" << endl;
									cout << left << setw(5) << "3" << setw(15) << "16:00PM" << setw(15) << "RM 56.00" << endl;
									cout << "\nPlease choose your departure time : ";
									cin >> deptime2;
									if (deptime2 == 1) {
										ftime = 11.00;
										money = 56.00;
									}
									else if (deptime2 == 2) {
										ftime = 14.00;
										money = 56.00;
									}
									else if (deptime2 == 3) {
										ftime = 16.00;
										money = 56.00;
									}
									break;
								default:
									cout << "Invalid";
									break;
								}
								cout << endl;
								cout << "Departure date : ";
								cin >> date1;
								cout << "Number of pax : ";
								cin >> pax;

								cout << "\nTICKET CONFIRMATION" << endl;
								cout << "--------------------" << endl;
								cout << "Train No : " << trainno << endl;
								cout << "Departure Time : " << ftime << ":00";
								if (ftime >= 12) {
									cout << "PM\n";
								}
								else {
									cout << "AM\n";
								}
								cout << "Departure Date : " << date1 << endl;
								cout << "Number of pax : " << pax << endl;
								cout << "Price : RM" << money << ".00" << endl;
							}
							else if (choice1 == 'y' || choice1 == 'Y') {
								break;
							}
							else {
								cout << "Invalid" << endl;
							}
						} while (choice1 != 'y' || choice1 != 'Y');
					}
					else if (choice2 == 'n' || choice2 == 'N') {
						break;
					}
				} while (choice2 != 'n' || choice2 != 'N');

				cout << "                                              ____ \n";
				cout << "    __________   ========  |      __      |  |    |       \n";
				cout << "   / |        |     ||     |     |  |     |  |     |      \n";
				cout << "  /--         |     ||     |    |    |    |  |      |   \n";
				cout << "  |           |     ||     |   |      |   |  |       |   \n";
				cout << "   -----------      ||     |__|        |__|  |_______|    \n";
				cout << "    000   000                                          \n";













		}else if (menu_choose == 2) {
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



	

