#include <iostream>
// #include <string.h>
using namespace std;

extern "C" int strlen(const char*); // from <string.h>
void f()
{
char v[] = "Annemarie";
char* p = v; // implicit conversion of char[] to char*
cout<<"strlen(p) "<<strlen(p)<<endl;
cout<<"strlen(v) "<<strlen(v); // implicit conversion of char[] to char*
// v = p; // error : cannot assign to array
}
int main(void){
    using I = int;      //equivalent to "typedef int I;"
    // using PF = int(*)double;    //pointer to function taking a double and returning an int
    using Pchar = char*;        //pointer to character
    char b = 'a';
    Pchar c = &b;
    I a = 2;
    cout<<a<<endl;

    f();
    //pg 189
    int* x = nullptr;
    int* p = NULL; // error : can’t assign a void* to an int*
}


//void * is a 'pointer to an object of unknown type'
void f(int* pi)
{
void*pv = pi; // ok: implicit conversion of int* to void*
// *pv; // error : can’t dereference void*
// ++pv; // error : can’t increment void* (the size of the object pointed to is unknown)
int* pi2 = static_cast<int*>(pv); // explicit conversion back to int*
// double* pd1 = pv; // error
// double* pd2 = pi; // error
double* pd3 = static_cast<double*>(pv); // unsafe (§11.5.2)
}
