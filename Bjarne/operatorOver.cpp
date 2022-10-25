#include <iostream>
using namespace std;
class A{
    int a,b;
    public:
        A(int x=0,int y=0):a{x},b{y}{};
        A operator++(){  //prefix operator overloading doesn't take any argument for compiler to understand
            A tmp;
            tmp.a = ++a;
            tmp.b = ++b;
            return tmp;
        }
        A operator++(int){  //postfix operator overloading take an argument but doesn't use it. It is only there
            A tmp;          // for making compiler understand that it is for postfix.
            tmp.a = a++;
            tmp.b = b++;
            return tmp;
        }

        friend ostream& operator<<(ostream&,A);
        friend istream& operator >> (istream& in, A&);
};
//return type is 'ostream&' is taken to create cascading effect on 'cout << a1 << a2...'
ostream& operator<<(ostream& out , A a1){
    out << a1.a << " " << a1.b << endl;
    return out;
}
istream& operator >> (istream& in, A& a1){
    in >> a1.a ; 
    in >> a1.b ;//>> endl;
    return in;
}
int main(void){
    A a1(1,2), a2(3,5);
    cout << 3+5 << endl;      //cout.operator+(int, int);
    cout << a1 << a2;     //operator << (operator<<(ostream&, a1) , a2);

    cout << "Give a2 & a2" << endl;
    cin >> a1 >> a2;
    cout << a1 << a2;
    cout <<"\n\n";
    A a3 = a1++;        //~= A a3 = a1.operator++(); //no need to give any arguments...strange.
    cout << a3 << a1;
    cout << endl << endl;
    A a4 = ++a1;        //~= A a4 = a1.operator++(); //prefix so zero arguments.
    cout << a4 << a1;
}
/*
cout << a1; ~= cout.operator<<(a1) which means we have to make << as member function of ostream as cout is an object
of ostream class which seems tough. So other option will be that we make a global function which will be friend to
the desired class so that it can perform operation in its private members as well.
So,
    cout << a1; ~= operator<<(cout,a1);
Here, 'operator' & '<<' doesn't need to be connected for name of the function.
To create a function for overloading of an operator, we need to use prefix 'operator' before operator symbol.
We can only overload operator for non-primitives type.
*/