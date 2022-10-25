#include <iostream>
using namespace std;
 class Person{
    public:
        virtual void fun() = 0;
        void f1(){};
 };
 class Student: public Person{
    public:
        void fun(){
            cout <<"fun() is overridden.\n";
        }
 };

/*
1.) A class containing at least 1 pure virtual function is an abstract class.
2.) A pure virtual function is do nothing function i.e. it is not given any definition.
3.) It is made virtual to stop early binding while accessing its overridden function through pointer of
    parent class type pointing to child object.
4.) The function is assigned zero which tells compiler that the function will not have its body, neither inside
    class nor outside the class. So, it will be illegal to call such function by any means becaues of which
    the instantiation of class containing such function is prohibited.
5.) Simply put, we can not instantiate abstract class.
6.) A child class of abstract parent class must define all its virtual function otherwise it should make itself
    abstract by declaring the function pure virtual. In this case, child class will also not be instantiated.
7.) Abstract class is made to create generalization of a concept which will be implemented by its child class 
    as per its need.
8.) abstract class can also contain normal function but it can only be called by its child class
*/