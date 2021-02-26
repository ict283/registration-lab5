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

Y GetName();

Y SetName(Y);

Y GetID();

Y SetID(Y);

Y GetCredits() const;

Y SetCredits(Y);

private:

Y name;
Y id;
Y credits;

};

ostream & operator <<(Y);

istream & operator >>(Y);

#endif
