// For review purposes only! Does not represent the actual solution!

#ifndef REGIST_H_INCLUDED
#define REGIST_H_INCLUDED

#include <iostream>
#include "Result.h"
#include "Unit.h"
#include "Date.h"
#include "schemas/schemas.h"

using namespace std;

const Y MaxResults = Y;

class Registration {
public:

    Registration();

    Registration(Y);

    Y GetCredits() const;

    Y GetCount() const;

    Y SetCount(Y);

    Y GetStudent() const;

    Y SetStudent(Y);

    Y GetSemester() const;

    Y SetSemester(Y);

private:

    Y student;
    Y semester;
    Y count;
};

    ostream & operator <<(Y);

    istream & operator >>(Y);

#endif
