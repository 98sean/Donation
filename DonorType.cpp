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

#include "DonorType.h"

#include <iostream>
#include <iomanip>
using namespace std;

DonorType::DonorType(const std::string& paramFirstName,
    const std::string& paramLastName, int paramMemberNo,
    double paramDonorAmt)
    : MemberType(paramFirstName, paramLastName, paramMemberNo)
{
    donorAmount = paramDonorAmt;
}

void DonorType::setDonorInfo(const string& paramFirstName,
    const string& paramLastName, int paramMemberNo,
    double paramDonorAmt)
{
    setMemberInfo(paramFirstName, paramLastName, paramMemberNo);
    donorAmount = paramDonorAmt;
}

void DonorType::setAmountDonated(double paramDonationAmount)
{
    donorAmount = paramDonationAmount;
}

double DonorType::getAmountDonated() const
{
    return donorAmount;
}

void DonorType::printDonor() const
{
    printMemberInfo();
}

void DonorType::printDonation() const
{
    cout << getLastName() << ", " << getFirstName() << "\n";
    cout << "    Donation amount: $";
    cout << fixed << showpoint << setprecision(2) << donorAmount;
}

bool DonorType::operator< (const DonorType& paramDonorType) const
{
    return (this->getMembershipNo() <
        paramDonorType.getMembershipNo());
}

bool DonorType::operator== (int memberNo) const
{
    return (this->getMembershipNo() == memberNo);
}