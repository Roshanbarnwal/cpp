#include <iostream>
#include "access.cpp"
using namespace std;

int main(void){
    A a;
    B b;
    C c;
    D d;
    cout<< a.cA <<endl;//can't access private & protected
    //b.cA is private inside 'b' as derived mode is private so it can't be accessed outside the class 'B'.
    cout <<b.cB <<" "<<  endl;//can't access private & protected
    // b.ccA(); //ccA() becomes private member of 'b' after inheritance which is accessible inside 'B' class 
                //definition only.
    // d.bbD();//protected & private can't be called
    d.ccD();
}
