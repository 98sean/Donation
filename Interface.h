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

#ifndef INTERFACE_H
#define	INTERFACE_H

#include "DonorList.h"

void displayMenu();
void processSelection(DonorList&); 
void addDonor(DonorList&);
void deleteDonor(DonorList&);
void printAllDonors(const DonorList&);
void printAllDonations(const DonorList&);
void printTotalDonations(const DonorList&);
void printHighestDonation(const DonorList&);

#endif