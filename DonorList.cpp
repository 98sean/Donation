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

#include "DonorList.h"

#include <algorithm>
#include <iostream>
using namespace std;

void DonorList::addDonor(const std::string& firstName,
	const std::string& lastName, int memberNo, double donorAmt)
{
	DonorType tempDonor = DonorType(firstName, lastName, memberNo, 
		donorAmt);
	donorList->insert(tempDonor);
}

int DonorList::getNoOfDonors() const
{
	return static_cast<int>(donorList->size());
}

double DonorList::getTotalDonations() const
{
	double totalDonated = 0.0;
	for (const auto& elem : *donorList)
	{
		totalDonated += elem.getAmountDonated();
	}
	return totalDonated;
}

double DonorList::getHighestDonation() const
{
	double maxDonation = 0.0;
	for (const auto& elem : *donorList)
	{
		if (elem.getAmountDonated() > maxDonation)
		{
			maxDonation = elem.getAmountDonated();
		}
	}
	return maxDonation;
}

bool DonorList::isEmpty() const
{
	return (static_cast<int>(donorList->size()) == 0);
}

bool DonorList::searchID(int memberNoToSearch) const
{
	return (find((this->donorList->begin()), 
		(this->donorList->end()), memberNoToSearch) != 
		this->donorList->end());
}

void DonorList::deleteDonor(int memberNoToSearch)
{
	auto end = this->donorList->end();
	auto iter = find((this->donorList->begin()), 
		end, memberNoToSearch);
	if (iter != end)
	{
		this->donorList->erase(iter);
	}
}

void DonorList::printAllDonors() const
{
	for (const auto& elem : *donorList)
	{
		elem.printDonor();
	}
}

void DonorList::printAllDonations() const
{
	for (const auto& elem : *donorList)
	{
		cout << "(" << elem.getMembershipNo() << ") ";
		elem.printDonation();
	}
}

void DonorList::clearList()
{
	donorList->clear();
}

DonorList::~DonorList()
{
	delete donorList;
	donorList = nullptr;
}