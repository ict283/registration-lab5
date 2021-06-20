// For review purposes only! Does not represent the actual solution!

/* Test File Example */

#include <iomanip>
#include "Unit.h"

using namespace std;

//------------------------------------//

/* headers */

template <class T>
void assertThat(string testName, T result, T expected);

void runAllUnitTests();

/*

   Declare unit tests here...
    - update unit tests (new custom 'Unit Coordinator' attribute)

 */

//------------------------------------//

/* implentation */

template <class T>
void assertThat(string testName, T result, T expected)
{
        cout<<setw(35)<<testName<<setw(20);
        if(result==expected)
                cout<<"- PASSED"<<endl;
        else
                cout<<"- FAILED"<<endl;
}

void runAllUnitTests()
{

}

/*

   Implment unit tests here...
    - update unit tests (new custom 'Unit Coordinator' attribute)

 */

//------------------------------------//
