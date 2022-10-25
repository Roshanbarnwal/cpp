#include <iostream>
using namespace std;
class A{
    int a;
    public:
        A(int x){
            a = x;
            cout <<"constructor A called\n";
        }
        ~A(){cout <<"Destructor A called\n";}
};
class B: private A{
    int b;
    public:
        B(int x,int y): A(x){
            b = y;
            cout << "constructor B called\n";
        }
        ~B(){cout <<"Destructor B called\n";}
};
int main(void){
    B(2,3);
}
/*
First child constructor is called then parent constructor is called. First parent constructor is executed then
child constructor is executed. compiler will always give dummy constructor, either it is for parent class or child
class. So, when there is a constructor defined in parent class, we can't allow compiler to give its dummy constructor
through child constructor otherwise error occurs. That's why we have called parent constructor ourselves above.

Child destructor is called and executed first then at the end parent destructor is called. Since there is no
arguments in destructor, we don't need to worry about error as compiler calls the right destructor.
*/