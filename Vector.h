
#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
using namespace std;

template <class T> 
class Vector
{
    
public:
    
    Vector(); 

    ~Vector();
    
    
private:

    T *list;  
    
};

// implementation in the .h file

template <class T>
Vector<T>::Vector()
{

}

template <class T>
Vector<T>::~Vector()
{

}

#endif


