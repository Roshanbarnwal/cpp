#include "Vector.h"
// #include <iostream>
// using namespace std;

Vector::Vector(int s):elem{new double[s]},sz{s} {
    for(int i=0; i<s; i++){
        elem[i] = i;
    }
}
int Vector::size(){
    return sz;
}