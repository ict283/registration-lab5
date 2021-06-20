// For review purposes only! Does not represent the actual solution!

/* Test File Example */

#include <iomanip>
#include "Regist.h"

using namespace std;

//------------------------------------//

/* headers */

template <class T>
void assertThat(string testName, T result, T expected);

void runAllRegistTests();

/*

   Declare unit tests here...

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

void runAllRegistTests()
{

}

/*

   Implment unit tests here...

 */

//------------------------------------//
