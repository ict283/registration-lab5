// For review purposes only! Does not represent the actual solution!

#ifndef UNIT_H_INCLUDED
#define UNIT_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Unit {
public:

Unit();

Unit(Y);

Y getName();

Y setName(Y);

Y getID();

Y setID(Y);

Y getCredits() const;

Y setCredits(Y);

private:

Y name;
Y id;
Y credits;

};

ostream & operator <<(Y);

istream & operator >>(Y);

#endif
