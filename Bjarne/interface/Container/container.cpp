#include <iostream>
using namespace std;
#include "C:/c++/Bjarne/interface/Vector/Vector.h"
// #include "C:/c++/Bjarne/interface/Vector/Vector1.cpp"
// #include "C:/c++/Bjarne/interface/Vector/user.cpp"
class Container{

    public:
    //virtual means "may be redefined later in a class derived from this one."
        virtual double& operator[](int) = 0;    //=0 means pure virtual function
        virtual int size() const = 0;   //const member function
        virtual ~Container(){}  //destructor
};

void use (Container& c){
    const int sz = c.size();
    for(int i=0; i!= sz; ++i){
        cout <<c[i] <<'\n';
    }
}

class Vector_container : public Container{
    Vector v;
    public:
        Vector_container(int s) :v(s){} //Vector of s elements
        ~Vector_container(){}

        double& operator[](int i){return v[i];}
        int size() const {return v.size();}
};

int main(void){
    Vector_container a(5);
    cout<<a.size()<<endl;
}