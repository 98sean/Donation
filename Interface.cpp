/*
	CMatrix

	Liang, Brandon
	Vieyra, Alfonso
	Lee, Sean
	Do, Holly
	Hill, Natalia

	December 14, 2021

	CS A250
	Project 2
*/

#include "Interface.h"
#include "DonorList.h"

#include <iostream>
#include <iomanip>
using namespace std;

void displayMenu()
{
	cout << "**************************************************\n"
		<< "                    MAIN MENU                     \n"
		<< "**************************************************\n" 
		<< endl;
	cout << "Select one of the following:\n" << endl;
	cout << "    1. Add a donor\n"
		<< "    2. Delete a donor\n"
		<< "    3. Print all donors\n"
		<< "    4. Print all donations\n"
		<< "    5. Print total donations\n"
		<< "    6. Print highest donation\n"
		<< "    7: To exit\n" << endl;
}

void processSelection(DonorList& paramList)
{
	bool continuation = true;
	while (continuation)
	{
		cout << "  => Enter your selection: ";
		int selection = 0;
		cin >> selection;
		cout << endl;
		if (selection == 1)
		{
			addDonor(paramList);
			cout << endl << "  => Donor has been added." << endl;
		}
		else if (selection == 2)
		{
			if (paramList.getNoOfDonors() == 0)
			{
				cerr << "The database has no donors." << endl;
			}
			else
			{
				deleteDonor(paramList);
				cout << endl << "  => Donor has been deleted." <<
					endl;
			}
		}
		else if (selection == 3)
		{
			printAllDonors(paramList);
		}
		else if (selection == 4)
		{
			printAllDonations(paramList);
		}
		else if (selection == 5)
		{
			printTotalDonations(paramList);
		}
		else if (selection == 6)
		{
			printHighestDonation(paramList);
		}
		else if (selection == 7)
		{
			continuation = false;
			cout << "  => Thank you for visiting our site!" << endl;
		}
		else
		{
			cerr << "  => Sorry. That is not a selection." << endl;
		}

		if (continuation)
		{
			cout << endl <<
				"  => Would you like to continue? (y/n) ";
			char choice = 'y';
			cin >> choice;
			if (choice == 'n')
			{
				continuation = false;
				cout << endl <<
					"  => Thank you for visiting our site!" << endl;
			}
			else
			{
				cout << endl;
				displayMenu();
			}
		}
	}
}

void addDonor(DonorList& paramList)
{
	cout << "  => Enter donor's first name: ";
	string firstName;
	cin >> firstName;
	cout << "  => Enter donor's last name: ";
	string lastName;
	cin >> lastName;
	cout << "  => Enter donor's membership number: ";
	int MembershipNum = 0;
	cin >> MembershipNum;
	cout << "  => Enter amount donated: $ ";
	double amtDonated = 0.0;
	cin >> amtDonated;
	paramList.addDonor(firstName, lastName, MembershipNum, 
		amtDonated);        
}

void deleteDonor(DonorList& paramList)
{
	cout << "  => Enter donor's membership number: ";
	int MembershipNum = 0;
	cin >> MembershipNum;
	paramList.deleteDonor(MembershipNum);
}

void printAllDonors(const DonorList& paramList)
{
	paramList.printAllDonors();
}

void printAllDonations(const DonorList& paramList)
{
	paramList.printAllDonations();
}

void printTotalDonations(const DonorList& paramList)
{
	cout << "     Total donations: $";
	cout << fixed << setprecision(2) << 
		paramList.getTotalDonations()<< endl;
}

void printHighestDonation(const DonorList& paramList)
{
	cout << "     Highest donation: $";
	cout << fixed << setprecision(2) << 
		paramList.getHighestDonation() << endl;
}