// For review purposes only! Does not represent the actual solution!

#ifndef RESULT_H_INCLUDED
#define RESULT_H_INCLUDED

#include <iostream>

using namespace std;

class Result
{
public:

Result();

Result(Y);

Y getResult() const;

Y setResult(Y);

private:

Y result;
};

ostream & operator <<(Y);

istream & operator >>(Y);

#endif
