// For review purposes only! Does not represent the actual solution!

#ifndef UNIT_H_INCLUDED
#define UNIT_H_INCLUDED

#include <iostream>
#include <string>
#include "schemas/schemas.h"

using namespace std;

class Unit {
public:

Unit();

Unit(Y);

Y GetName();

Y SetName(Y);

Y GetID();

Y SetID(Y);

Y GetCredits() const;

Y SetCredits(Y);

Y GetUnitCoordinator() const;

Y SetUnitCoordinator(Y);

Y GetStudentList() const;

Y SetStudentList(Y);

Y AddStudent(Y);
//think about what other operations are needed

private:

Y name;
Y id;
Y credits;
Y unitCoordinator;
Vector<Student> studentList;

};

ostream & operator <<(Y);

istream & operator >>(Y);

#endif
