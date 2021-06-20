// For review purposes only! Does not represent the actual solution!

#include <iostream>
#include <fstream>
#include <string>
#include "Unit.h"
#include "Regist.h"
#include "Utilities/IO.h" //Custom IO class

//Unit tests
#include "test/Date_test.h"   // runAllDateTests()
#include "test/Result_test.h" // runAllResultTests()
#include "test/Unit_test.h"   // runAllUnitTests()
#include "test/Regist_test.h" // runAllRegistTests()

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


        /*
          Think about how you might implement custom IO demo with what you've learned so far...
          This is a good chance to practice class design and build proficiency with getting and setting values.

          This code review presents some possible ideas; it is not the solution to the problem however.
          You'll need to create your own design.
        */

        return 0;
}
