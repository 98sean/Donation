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

#ifndef DONORLIST_H
#define	DONORLIST_H

#include "DonorType.h"

#include <set>

class DonorList
{
public:
	DonorList() : donorList(new std::set<DonorType>) {}

	void addDonor(const std::string&, const std::string&, int,
		double);

	int getNoOfDonors() const;
	double getTotalDonations() const;
	double getHighestDonation() const;

	bool isEmpty() const;
	bool searchID(int) const;

	void deleteDonor(int);

	void printAllDonors() const;
	void printAllDonations() const;

	void clearList();
	~DonorList();

	DonorList(const DonorList&);
	DonorList& operator= (const DonorList&);

private:
	std::set<DonorType>* donorList;
};

#endif