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
    bool personReader (string file, Person& person);
    bool primeReader(string file, Prime& prime);
    
    //writers
    bool personWriter (string file, Person& person);
    bool primeWriter(string file, Prime& prime);
    
};

#endif /* IO_h */
