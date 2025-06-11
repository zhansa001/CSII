//Classes for Object_obstruction 
//Sandy Zhang
//10/2/2024

#include <iostream>

#ifndef OBJECT_OBSTRUCTION_HPP
#define OBJECT_OBSTRUCTION_HPP

class objConstruct {
    public:
        objConstruct(); // Default Constructor
        objConstruct(const objConstruct&); // Copy Constructor
        ~objConstruct(); //Destructor
        objConstruct& operator= (objConstruct); //Overloaded Assignment

    private:
};

#endif

