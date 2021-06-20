// For review purposes only! Does not represent the actual solution!

#ifndef UNIT_H_INCLUDED
#define UNIT_H_INCLUDED

#include <iostream>
#include <string>
#include "Vector.h"

using namespace std;

struct unitCoordinator
{
  Y name;
  Y roomNo;
  Y telNo;
  Y email;
};

struct student
{
  Y studentId;
  Y studentName;
};

class Unit {
public:

Unit();

Unit(Y);

~Unit();

Y getName();

Y setName(Y);

Y getID();

Y setID(Y);

Y getCredits() const;

Y setCredits(Y);

Y setUC(Y);

Y getUC(Y);

Y setStudent(Y);

Y getStudent(Y);

private:

Y name;
Y id;
Y credits;
unitCoordinator uc;
Vector<student> listOfstudents;

};

ostream & operator <<(Y);

istream & operator >>(Y);

#endif
