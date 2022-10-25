#include <iostream>
using namespace std;
class A{
    public:
        virtual void f1(){
        // void f1(){
            cout<<"f1 of A is called.\n";
        }
};
class B: public A{
    public:
        void f1(){
            cout<<"f1 of B is called.\n";
        }
        void f2(){
            cout<<"f2 of B is called.\n";
        }
};
int main(void){
    A *p,o1;
    B o2;
    cout << sizeof(*p) << " " << sizeof(o1) << " " << sizeof(o2)<<endl; //compiler will create a pointer as a data member
                            // for virtual function inside class if the class(or parent class) contains at least 1
                            // virtual function. 
    p = &o2;    
    p->f1();
}
/*
pointer to parent class can also point to its child classes
but pointer to child class can't point to its parent class.
Compiler does early binding by checking the type of variable. Even a pointer is pointing to child class but is of
parent type, compiler will bind it to parent function. Above, p is pointing to child class & trying to access
f1() of child class but compiler binds it to parent as value is checked at run-time.
Because of this, overriding is failing here.
So, to avoid early binding of a function, we declare it as 'virtual' saying compiler that it should be bound at
run-time.

If we declare a function of parent class 'virtual' then its all other overriding function in its child
classes will be treated as virtual.
*/
/*
Q.) What happens in memory when a c++ class is instantiated?
Ans:- The functions are all stored in the executable itself, so they're loaded from the get-go.
      Any memory needed by that object for member variables is allocated.

      If you're wondering how the function knows which object it's being called on, there's basically an 
      invisible "this" pointer that's passed as the first parameter to the function.

      Even if the object has no members whatsoever, it is still allocated some memory so as to ensure that 
      all objects have unique memory addresses.
*/
/*
When an object is instantiated;

1.) Memory is allocated
2.) The constructor is executed
3.) The vtable is "set up"
Number 3 is the reason why constructors cannot call virtual functions in derived classes 
(when the constructor is executed the vtable is not yet "set up").
*/
/*
Whenever there is a single virtual function in a class(or even in parent class), compiler creates a pointer as a
data member of the class(or only parent class, not child class as it will be inherited from parent class anyway).
It can be checked by finding the size of class which will be 4 bytes more (size of pointer variable is 4 byte).

The pointer will point to a static array of pointers containing the address of all virtual functions for the class.
Now as the array is static, it will be allocated memory only once no matter how many objects of a class is being 
created. But each class(either child or parent) will be allocated a separate static array as each class can have 
different number of virtual functions which will create an array of different sizes. 

Note: the pointer will pointer to the static array of the corresponding class. As only 1 pointer is created for
        both parent and child class, but it will point to vtable(name given to the array) of parent class if
        object is created otherwise it will point to vtable of child class.

Note: if a virtual function is overridden in child class, then the function inside the child class(the overridding
        function) will also be virtual no matter if it is declared explicitly or not.
During late binding, run time environment will look into vptr then vtable then decide which function to call.
*/