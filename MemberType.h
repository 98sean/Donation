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

#ifndef MEMBERTYPE_H
#define MEMBERTYPE_H

#include <string>

class MemberType
{
public:
    MemberType() : firstName("N/A"), lastName("N/A"),
        memberNo(0) {}
    MemberType(const std::string&, const std::string&, int);

    void setMemberInfo(const std::string&,
        const std::string&, int);

    std::string getFirstName() const;
    std::string getLastName() const;
    int getMembershipNo() const;

    void printName() const;
    void printMemberInfo() const;

    ~MemberType() {}

private:
    std::string firstName;
    std::string lastName;
    int memberNo;
};

#endif