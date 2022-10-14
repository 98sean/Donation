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

#include "MemberType.h"

#include <iostream>
using namespace std;

MemberType::MemberType(const std::string& paramFirstName,
	const std::string& paramLastName, int paramMemberNo)
{
	firstName = paramFirstName;
	lastName = paramLastName;
	memberNo = paramMemberNo;
}

void MemberType::setMemberInfo(const std::string& paramFirstName,
	const std::string& paramLasttName, int paramMemberNo)
{
	firstName = paramFirstName;
	lastName = paramLasttName;
	memberNo = paramMemberNo;
}

string MemberType::getFirstName() const
{
	return firstName;
}

string MemberType::getLastName() const
{
	return lastName;
}

int MemberType::getMembershipNo() const
{
	return memberNo;
}

void MemberType::printName() const
{
	cout << lastName << ", " << firstName << endl;
}

void MemberType::printMemberInfo() const
{
	cout << memberNo << " - " << firstName << " " << lastName
		<< endl;
}
