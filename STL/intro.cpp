#include <iostream>
using namespace std;

int main(void){

}
/*
-STL is Standard Template Library
-It is a powerful set of C++ template classes
-At the core of the C++ Standard Template Library are following three well structured components
    -Containers
    -Algorithms
    -Iterators
a.)Containers
    Containers are used to manage collections of objects of a certain kind.
    Container library in STL provide containers that are used to create data structures like arrays,
    linked list, trees, etc.
    These container are generic, they can hold elements of any data types.
    e.g. vector can be used for creating dynamic arrays of char, integer, float and other types

b.)Algorithms
    Algorithms act on containers. They provide the means by which you will perform initialization, sorting, 
    searching, and transforming of the contents of containers.
    Algorithms library contains built in functions that performs complex algorithms on the data structures.
    e.g.
    One can reverse a range with reverse() function, sort a range with sort() functin search in a range with
    binary_search() and so on.
    -Algorithm library provides abstraction, i.e. you don't necessarily need to know how the algorithm works.

c.)Iterators
    Iterators are used to step through the elements of collections of objects. These collections may be containers 
    or subsets of containers.
    Iterators in STL are used to point to the containers.
    Iterators actually acts as a bridge between containers and algorithms.
    Containers contain data & for algorithms to perform operations on the data, it has to access them and iterators 
    helps to access them by means of pointers.
    e.g.
        sort() algorithm have two parameters, starting iterator and ending iterator, now sort() compare the elements
        pointed by each of these iterators and arrange them in sorted order, thus it does not matter what is the type
        of the container and same sort() can be used on different types of containers.
*/