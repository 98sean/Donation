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

#include <iostream>
using namespace std;

DonorList::DonorList(const DonorList& otherDonorList)
{
	donorList = new set<DonorType>;
	*donorList = *otherDonorList.donorList;
}

DonorList& DonorList::operator=(const DonorList& paramList)
{
	if (&paramList == this)
	{
		cerr << "Attempted assignment to itself.";
	}
    else
    {
		*this->donorList = *paramList.donorList;
    }
	return *this;
}