#include <iostream>
using namespace std;
class Complex{
    int a,b;
    public:
        Complex(){cout<<"default called   "<<this<<endl;} ///default constructor
        Complex(int k){a=k,b=0;
        cout << "1 para called   "<<this<<endl;}
        void setData(int x, int y){a=x,b=y;}
        void showData(){cout <<"a = "<< a << " b= "<<b<<"  "<<this<<endl;}
        // Complex operator=(int x){      //just trying to understand how assigning a primitive to object calls constructor for
        //     Complex tmp(x);          //this is called by object & returns a complex object but there won't be
        //     return tmp;              //any effect in the calling object as it is just calling the function
        // }                            //which is not changing its value in the first place.
        ~Complex(){cout<<"destructor called "<<this<<endl;}
};
int main(void){
    Complex c1;
    c1.showData();
    int x=5;
    // c1 = x;     //error when parameterized constructor is not there
    c1 = x ;         //parameterized constructor is called when primitive is assigned/passed to an object.
                //may be a new object is created with parameter 'x' & then it is assigned to c1 by implicit copy assignment operator.
    c1.showData();
}
/*
-int, char, float double are primitive types
-class type is any class you defined.
when primitive type is assigned to another primitive type, automatic conversion is made(if possible).
*/