// For review purposes only! Does not represent the actual solution!

#ifndef REGIST_H_INCLUDED
#define REGIST_H_INCLUDED

#include <iostream>
#include "result.h"
#include "unit.h"
#include "date.h"

using namespace std;

const Y MaxResults = Y;

class Registration {
public:

    Registration();

    Registration(Y);

    Y GetCredits() const;

    Y GetCount() const;

    Y SetCount(Y);

    Y GetStudentID() const;

    Y SetStudentID(Y);

    Y GetSemester() const;

    Y SetSemester(Y);

private:

    Y studentId;
    Y semester;
    Y count;
};

    ostream & operator <<(Y);

    istream & operator >>(Y);

#endif
