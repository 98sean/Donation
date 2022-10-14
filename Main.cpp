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
#include "InputHandler.h"

using namespace std;

int main()
{
	DonorList myList;
	getDonorData(myList);
	if (!(myList.isEmpty()))
	{
		displayMenu();
		processSelection(myList);
	}
	return 0;
}