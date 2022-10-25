#include <iostream>
using namespace std;
class Dummy{
    private:
        int a,b,*p;
    public:
    Dummy(){
        p = new int;
    }
    Dummy (Dummy &d){
        a = d.a; b=d.b;
        //  p = d.p;    //shallow copy
        p = new int;
        *p = *(d.p);
    }
        void setData(int x, int y,int p){
            a=x, b=y; *(this->p) = p;
        }
        void showData(){cout<<"a = " << a<< " b= "<<b<<endl;}
        ~Dummy(){ delete p;}
};
int main(void){
    Dummy d1;
    d1.setData(3,4,6);
    Dummy d2 = d1;
    d2.showData();
    d2.setData(4,5,7);
    d1.showData();
    d2.showData();
}
/*
How we can create a copy of object?
    a.) By copy constructor
        e.g. Dummy d2 = d1;
    b.) By implicit copy assignment operator(operator overloading)
        e.g. Dummy d2;
             d2 = d1;
*/
/*
A.) Shallow Copy
->  Creating copy of object by copying data of all member variables as it is.
    If a pointer is an instance member of a class, its shallow copy leads to both the object
    having a pointer pointing to the same memory block. In this case, If a single object is deleted, 
    the pointer of another object will be pointing to invalid memory location , which makes it a 
    dangling pointer.
B.) Deep Copy
->  Creating an objec tby copying data of another object along with the values of memory resources
    resides outside the object but handled by that object.
*/