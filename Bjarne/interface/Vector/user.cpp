#include <iostream>
#include "Vector.h" //get Vector's interface
#include <cmath>    //get the standard-library math function
using namespace std;    //make std members visible
#include "Vector.cpp"

double sqrt_sum(Vector& v){
    double sum = 0;
    for(int i=0; i!=v.size(); i++)
         sum += sqrt(v.operator[](i));
    return sum;
}

int main(void){
    Vector v(5);
    cout<<sqrt_sum(v) << endl;
}