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

#ifndef DONORTYPE_H
#define	DONORTYPE_H

#include "MemberType.h"

class DonorType : public MemberType
{
public:
	DonorType() : donorAmount(0.0) {}
	DonorType(const std::string&, const std::string&, int,
		double);

	void setDonorInfo(const std::string&,
		const std::string&, int,
		double);
	void setAmountDonated(double);

	double getAmountDonated() const;

	void printDonor() const;
	void printDonation() const;

	~DonorType() {};

	bool operator< (const DonorType&) const;
	bool operator== (int) const;

private:
	//Member variables
	double donorAmount;
};

#endif