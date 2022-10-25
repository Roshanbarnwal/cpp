#include <iostream>
using namespace std;
//creation of class Vector
class Vector {
public:
Vector(int s) :elem{new double[s]}, sz{s} { } // construct a Vector//defining a constructor //no check if s is valid or not
double& operator[](int i) { 
    if (i<0 || size()<=i) throw out_of_range{"Vector::operator[]"}; //exit program //exception handling
    return elem[i]; 
    } // element access: subscripting
int size() { return sz; }

void read(istream& is){
    for(int i=0; i<(*this).sz;i++ ){
        // is>>(*this).operator[](i);
        is>>operator[](i);
        // is>>(*this)[i];
    }   
} 
void display(){
    cout<<"The elements are: ";
    for(int i=0; i<sz; i++){
        cout<< operator[](i) << " ";
    }cout<<endl;
}
private:
double *elem; // pointer to the elements
int sz; // the number of elements
};
/*
pg.79
Vector read(istream& is)
{
Vector v;
for (double d; is>>d;) // read floating-point values into d
v.push_back(d); // add d to v
return v;
}
*/

double read_and_sum(int s)
{
Vector v(s); // make a vector of s elements
cout <<"Give: ";
for (int i=0; i!=v.size(); ++i)
cin>>v[i]; // read into elements    //overloading of operator '[]'.
double sum = 0;
for (int i=0; i!=v.size(); ++i)
sum+=v[i]; // take the sum of the elements
return sum;
}

int main(void){
    Vector v(6);
    v.read(cin);
    v.display();
    //v.operatator[](2) ~= v[2]     due to overloading of '[]'
    cout << v.operator[](2) << endl;   
    double& a = v.operator[](2);
    a = 99;
    v.display();
    cout << v.operator[](2) << endl;
    cout << v.operator[](4) << endl;
    v.operator[](4)++;
    cout << v.operator[](4) << endl;
    a = 4;
    cout << v.operator[](2) << endl;
    // cout << v.operator[](6) << endl;
    // int &c = 3;
    cout << read_and_sum(4) << endl;
    //page72
    //In general, static_assert(A,S) prints S as a compiler error message if A is not true.
    static_assert(sizeof(int)>=4, "Integers are too small");

}

//exception handling in the constructor
// Vector :: Vector(int s){
//     if(s<0) throw length_error{};
//     elem = new double[s];
//     sz = s;
// }

/*
void f(Vector& v)
{
// ...
try { // exceptions here are handled by the handler defined below
    v[v.size()] = 7; // try to access beyond the end of v
}
catch (out_of_range) { // oops: out_of_range error
    // ... handle range error ...
}
// ...
}
*/
