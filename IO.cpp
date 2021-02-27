//
//  IO.cpp
//  demo
//
//  Created by Glenn Lum on 4/2/21.
//  Copyright © 2021 Glenn Lum. All rights reserved.
//

#include "IO.h"

IO::IO(){cout<<"IO Ready!"<<endl;}

IO::~IO(){cout<<"IO Shutdown!"<<endl;}

bool IO::personReader (string file, Person& person) {
    bool result = false;
    ifstream infile (file);
    if(infile.is_open()) {
        string str;
        int num;
        getline(infile,str,',');
        infile>>num;
        person.setName(str);
        person.setAge(num);
        infile.close();
        result = true;
    }else {
        result = false;
    }
    return result;
}

bool IO::primeReader(string file, Prime& prime) {
    bool result = false;
    ifstream infile (file);
    if(infile.is_open()) {
        int num;
        infile>>num;
        prime.setPrime(num);
        infile.close();
        result = true;
    }else {
        result = false;
    }
    return result;
}

bool IO::personWriter (string file, Person& person) {
    bool result = false;
    ofstream outfile (file);
    if(outfile.is_open()) {
        outfile<<"personWriter : "<<person.getName()<<", "<<person.getAge();
        outfile.close();
        result = true;
    }else {
        result = false;
    }
    return result;
}

bool IO::primeWriter(string file, Prime& prime) {
    bool result = false;
    ofstream outfile (file);
    if(outfile.is_open()) {
        outfile<<"primeWriter : "<<prime.getPrime();
        outfile.close();
        result = true;
    }else {
        result = false;
    }
    return result;
}
