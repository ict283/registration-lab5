// For review purposes only! Does not represent the actual solution!

#include <iostream>
#include <fstream>
#include <string>
#include "Unit.h"
#include "Regist.h"
#include "IO.h"
using namespace std;

int main()
{
        ifstream infile( "rinput.txt" );
        if( !infile ) return -1;

        Registration R;
        infile >> R;

        ofstream ofile( "routput.txt" );

        ofile << R
              << "Number of units = " << R.getCount() << '\n'
              << "Total credits     = " << R.getCredits() << '\n';

        return 0;
}
