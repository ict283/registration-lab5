// For review purposes only! Does not represent the actual solution!

#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Date
{
public:

    Date();

    Date(Y);

    Y GetDay();

    Y SetDay(Y);

    Y GetMonth();

    Y SetMonth(Y);

    Y GetYear();

    Y SetYear(Y);

private:

    Y day;
    Y month;
    Y year;
};

    ostream & operator <<(Y);

    istream & operator >>(Y);

#endif
