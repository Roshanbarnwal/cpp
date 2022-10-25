#include <iostream>
using namespace std;
class A{
    int a;
    public:
        A(int x):a{x}{cout<<"A para called "<<this<<endl;}
        void f1(){cout<<"hey! f1() called\n";}
        virtual ~A(){cout<<"virtual destructor A called "<<this<<endl;}
        void display(){cout<<"a = "<<a<<endl;}
};
class B: public A{
    int c;
    public:
        B(int x,int y):A(x),c{y}{cout<<"B para called "<<this<<endl;}
        void f2(){cout<<"Hey! f2() called\n";}
        ~B(){ cout<<"destructor B called "<<this<<endl;}
        void display(){
            A::display();
            cout<<"c = "<<c<<endl;
        }
};
int main(void){
    A *p = new B(3,4);
    p->display();   //due to early binding, A::display() will be called.
    delete p;       //due to early binding, destructor of A is only called. we know when destructor of B is called
                    //then only destructor of A will be called. But here even though 'p' is pointing to B but it is
                    //of type A. So, when p (memory of B) is deleted, destructor of only A is called as whenever
                    //an object is destroyed, a destructor will be called automatically but here compiler doesn't
                    //know if p is pointing to B due to early binding. So to avoid that we create virtual 
                    //destructor of A.
}
/*
In early binding, compiler decides which function to be invoked while calling.
Constructor does initializes, it doesn't give memory to object. After object is created, constructor is called.
*/