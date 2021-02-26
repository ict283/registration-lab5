// For review purposes only! Does not represent the actual solution!

#include <iostream>
#include <fstream>
#include <string>
#include "Unit.h"
#include "Regist.h"

using namespace std;

int main()
{
        ifstream infile( "rinput.txt" );
        if( !infile ) return -1;

        Registration R;
        infile >> R;

        ofstream ofile( "routput.txt" );

        ofile << R
              << "Number of units = " << R.GetCount() << '\n'
              << "Total credits     = " << R.GetCredits() << '\n';

        return 0;
}
