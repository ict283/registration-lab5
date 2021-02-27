//
//  IO.h
//  demo
//
//  Created by Glenn Lum on 4/2/21.
//  Copyright © 2021 Glenn Lum. All rights reserved.
//

#ifndef IO_h
#define IO_h

#include <stdio.h>
#include <iostream>
#include <fstream>
#include "Objects/Person.h"
#include "Objects/Prime.h"

using namespace std;

class IO {

public:

    IO();
    ~IO();

    //readers
    Y registReader (Y);
    Y resultReader(Y);
    Y dateReader (Y);
    Y unitReader(Y);

    //writers
    Y registWriter (Y);
    Y resultWriter(Y);
    Y dateWriter (Y);
    Y unitWriter(Y);

};

#endif /* IO_h */
