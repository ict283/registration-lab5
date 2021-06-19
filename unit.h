// For review purposes only! Does not represent the actual solution!

#ifndef UNIT_H_INCLUDED
#define UNIT_H_INCLUDED

#include <iostream>
#include <string>
#inlcude "Vector.h"

using namespace std;

struct UnitCoordinator{
Y name;
Y room;
Y telephone
Y email;
};

struct Student{
Y name;
Y id;
Y telephone
Y email;
};

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

Y SetUnitCoordinator();

Y GetListOfStudents() const;

Y SetListOfStudents();

private:

Y name;
Y id;
Y credits;
Y unitCoordinator;
Vector<Student> listOfStudents;

};

ostream & operator <<(Y);

istream & operator >>(Y);

#endif
