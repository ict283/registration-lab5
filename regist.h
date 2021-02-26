// For review purposes only! Does not represent the actual solution!

#ifndef REGIST_H_INCLUDED
#define REGIST_H_INCLUDED

#include <iostream>
#include "Result.h"
#include "Unit.h"
#include "Date.h"

using namespace std;

const Y MaxResults = Y;

class Registration {
public:

    Registration();

    Registration(Y);

    ~Registration();

    Y getCredits() const;

    Y getCount() const;

    Y getCount(Y);

    Y getStudentID() const;

    Y getStudentID(Y);

    Y getSemester() const;

    Y getSemester(Y);

private:

    Y studentId;
    Y semester;
    Y count;
};

    ostream & operator <<(Y);

    istream & operator >>(Y);

#endif
