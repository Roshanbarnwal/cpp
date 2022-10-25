#include <iostream>
using namespace std;
class complex {
    double re, im; // representation: two doubles
    public:
        ~complex(){cout << "destructor is called    " <<this<<endl;}
        complex(const complex& copy) :re{copy.re},im{copy.im} {cout << "copy called     "<<this<<endl;}
        complex(double r, double i) :re{r}, im{i} {cout <<"2 para called    "<<this<<endl;} // construct complex from two scalars
        complex(double r) :re{r}, im{0} {cout <<"1 para called  "<<this<<endl;} // construct complex from one scalar
        complex() :re{0}, im{0} {cout << "default called    "<<this<<endl;} // default complex: {0,0}
        
        //The const specifiers on the functions returning the real and imaginary parts indicate that these
//functions do not modify the object for which they are called.
        double real() const { return re; }
        void real(double d) { re=d; }
        double imag() const { return im; }
        void imag(double d) { im=d; }

        //returning object by reference won't create a copy of the object
        //otherwise copy constructor will be called.
        complex& operator+=(complex z) { re+=z.re , im+=z.im; return *this; } // add to re and im
        // and return the result
        complex& operator-=(complex z) { re -=z.re , im -=z.im; return *this; }//copy constructor had been called 
                        //if return type had not been by reference type.
                //'this' is a constant pointer. It contains the address of the object created/called.
        complex& operator*=(complex); // defined out-of-class somewhere
        complex& operator/=(complex); // defined out-of-class somewhere

        void display(){
            cout << re << " + i" << im << "\t\t"<<this<<endl;
        }
//page77
        // complex operator-(){ return -real(),-imag(); }  //-real() is left out 'cuz -imag() is the last to be 
                        // evaluated and thus returned.SO, complex(double r) is called as a constructor
        
        // complex operator-(){ return 99; }//it seems like you can pass only parameter for object to be returned.

        complex operator-(){ return {-real(),-imag()}; }  //complex(double r,double r) is called    
        //a member function can access other member function without the help of an object like above line. The
        //difference is when we call with the help of an object, we are not calling the member function of calling
        //object but the called function belongs to the object whose help we are taking.         
        complex operator-(complex a) { 
                // return {-a.real(), -a.imag()}; 
                complex tmp {-a.real(), -a.imag()};
                return tmp;
        } // unary minus

        bool equal(complex a, complex b) // equal
        {
        return a.real()==b.real() && a.imag()==b.imag();
        }
        bool notEqual(complex a, complex b) // not equal
        {
        // return !( a == b);
        }   

        complex operatorr(complex a, complex b){
            complex tmp = a+=b;
            return tmp; 
        //     return a+=b;    // operator+=() is called because '+=' is overloaded. (a+=b) != (a = a+b)
                            //(a+=b) == a.operator+=(b);
                            //return a+=b; calls one more copy because we are returning object from parameter
                            //if the returned object had been created inside function like 'tmp' above, no copy
                            //would have been created. 
        }
        /*
Class complex can be used like this:
void f(complex z)
{
complex a {2.3}; // construct {2.3,0.0} from 2.3
complex b {1/a};
complex c {a+z∗complex{1,2.3}};
// ...
if (c != b)
c = −(b/a)+2∗b;
}
The compiler converts operators involving complex numbers into appropriate function calls. For
example, c!=b means operator!=(c,b) and 1/a means operator/(complex{1},a).
        */
};
/*
here, in complex class, we are trying to create every function inline as by default every function definitions
inside a class are inline.
*/
int main(void){
    complex z(44,55);
    z.operator-().display();  //as no variable is pointing to this returned object, destructor is called for this.
    z.operator+=(z).display();
    cout << endl << endl;
//copy is called while initializing z2 by the means of function, only when returned object is by reference
//or parameter object given while calling the function, is returned.
     complex z2 = z.operator+=(complex(2,3));
    z.display();
    z2.display();
    cout << endl << endl;
    
    z.operator-(z).display();  //as no variable is pointing to this returned object, destructor is called for this.
    z.display();
    cout << endl << endl;
//why copy is not being called while initializing z3 'cuz returned object is created inside function itself.
    complex z3 = z2.operator-(z);
    z3.display();
    complex z4{2,4};    //we can also initialize a class like this
    z4.display();
    complex z5{z4};
    z5.display();
    z3 = z3;
    z3.display();

    cout <<endl<<endl;
    z2.operatorr(z2,z4).display();
    z2.display();
    cout <<endl<<endl;
    
}

/*
The const specifiers on the functions returning the real and imaginary parts indicate that these
functions do not modify the object for which they are called.

User-defined operators (‘‘overloaded operators’’) should be used cautiously and conventionally.
The syntax is fixed by the language, so you can’t define a unary /. Also, it is not possible to change
the meaning of an operator for built-in types, so you can’t redefine + to subtract ints.
*/
/*
VVVVVI:- If the returned object from a function is  created inside the function itself & then being assigned
        or simply returned, no copy constructor is being called.
        But, if the object to be returned is not created inside the function itself & rather it is available to the
        function from the beginning of the function call, then it needs to create a copy of it while returning or 
        assigning through return statement.
        
*/
