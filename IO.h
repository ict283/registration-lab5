#ifndef IO_H_INCLUDED
#define IO_H_INCLUDED

//include files here

using namespace std;

class IO //IO helper class
{
public:

    IO();

    ~IO();

    Y unitReader(Y);
    Y unitWriter(Y);

    Y dateReader(Y);
    Y dateWriter(Y);

    Y registReader(Y);
    Y registWriter(Y);

    Y resultReader(Y);
    Y resultWriter(Y);

};

#endif
