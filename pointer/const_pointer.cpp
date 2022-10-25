#include <iostream>
using namespace std;
struct Vector {
    int sz; // number of elements
    double *elem; // pointer to elements
};
void vector_init(Vector& v, int s)
{
v.elem = new double[s]; // allocate an array of s doubles
v.sz = s;
}
double read_and_sum(int s)
// read s integers from cin and return their sum; s is assumed to be positive
{
Vector v;
vector_init(v,s); // allocate s elements for v
cout <<"give: " << endl;
for (int i=0; i!=s; ++i)
cin>>v.elem[i]; // read into elements
double sum = 0;
for (int i=0; i!=s; ++i)
sum+=v.elem[i]; // take the sum of the elements
return sum;
}
int main(void){
//     int m = 3;  //const keyword is written after the data type to make it a constant datatype
//     char string[5] = "good";    //in c++, size of array must include '\0' as well.
//     // char * const ptr1 = "GOOD"; //constant pointer  //don't know why this is not working same is given the book
//     int const * ptr2 = &m; //pointer to a constant
//     cout << *ptr2 <<  " " << string << endl;

//     const int size = 10;
//     char name[size];    //this is not allowed in c to put const inside array size parameter.
// //     cout << name;
//         int a = 'a' * 123;
//         char b = 97 * 12;
//         cout << a << " " << b <<endl;

        // int *b = nullptr;
        // cout << *b <<" & "<< b <<endl;

        cout << read_and_sum(5) << endl;
}