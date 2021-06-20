// For review purposes only! Does not represent the actual solution!

#ifndef IO_h
#define IO_h

#include <iostream>
#include <fstream>
#include "../Date.h"
#include "../Unit.h"
#include "../Result.h"
#include "../Regist.h"

using namespace std;

class IO
{
public:

IO();

~IO();

/*
Example file readers

Reads data from a file and sets the objects attribute:
eg.
-  dateReader ("input.txt", dateObj, "month");
-  unitReader ("input.txt", unitObj, "id");
-  resultReader ("input.txt", resultObj, "result");
-  registReader ("input.txt", registObj, "all");

*/
bool dateReader (string file, Date& d, string attribute);

bool unitReader (string file, Unit& u, string attribute);

bool resultReader(string file, Result& r, string attribute);

bool registReader (string file, Regist& r, string attribute);

/*
Example file writers

Writes object attribute data to a file:
eg.
-  dateWriter ("input.txt", dateObj, "month");
-  unitWriter("input.txt", unitObj, "id");
-  resultWriter ("input.txt", resultObj, "result");
-  registWriter ("input.txt", registObj, "all");

*/
bool dateWriter (string file, Date& d, string attribute);

bool unitWriter (string file, Unit& u, string attribute);

bool resultWriter(string file, Result& r, string attribute);

bool registWriter (string file, Regist& r, string attribute);

};

#endif /* IO_h */
