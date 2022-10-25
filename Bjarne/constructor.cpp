#include <iostream>
using namespace std;
//https://www.keithschwarz.com/cs106l/winter20072008/handouts/170_Copy_Constructor_Assignment_Operator.pdf
class test{
    int a;
    public:
        test():a{0}{cout << "default called     "<<this<<endl;}    //only constructors take member initialilzers
        test(int x) : a{x}{ cout << "1 para called      "<<this<<endl;}
        test (const test &T) : a{T.a} { cout << "copy called       "<<this<<endl;}
        ~test() {cout << "destructor called     "<<this<<endl;}
        test* address(){ return this;}
        test add(test p){
            // test T;
            // T.a = a + p.a;
            // return T;
            return {a+p.a};
            // return p;    //when object from parameter is returned, copy constructor
                        //is called but when the object created inside function is 
                        //returned, no constructor is called. Same goes while initializing(not assigning) object
                        //via function return types.
        }

        void display() {cout << "   a: " << a ;}
};

int main(void){
    test t1(5),t2(10),t3;
    // // cout <<"t3: "<< &t3 <<"     t2: "<< &t2 <<endl;
    // t1.display(); t2.display(); t3.display(); cout<<endl;
    // cout <<"t3: "<< t3.address() <<"     t2: "<< t2.address() <<endl;
    // // cout <<"addressof(t3): "<<addressof(t3) <<endl;
    // t3 = t2;
    // t1.display(); t2.display(); t3.display(); cout<<endl;
    // cout <<"t3: "<< &t3 <<"     t2: "<< &t2 <<endl;

    t3 = t1.add(test(10));  //test p(10);   //t3 is being assigned.
    cout <<"\n\n";
    // t1.display(); t2.display(); t3.display(); cout<<endl;
    // cout <<"t3: "<< &t3 <<"     t2: "<< &t2 <<endl;

    test t6 = t1.add(t2);   //t6 is being initialized
                            //test p(t2);  //only 1 destructor is called for this line at this moment 'cuz t6 
                            //is declared on this line unlike t3.
                            //Actually, when t3 is assigned a new object, each member value is assigned from new to t3.
                            //when object is returned from a function & 'initialized' to a immediate new object variable,
                            //copy constructor is called only if the returned object is from the parameter of function.
    cout << endl << endl << endl;
    // test t4 = t3;   //we know assigning is pass by copy. So, how can a copy of an object is created? It is done
    //             //by creating an object with copy constructor 'cuz we want the same value to that of object.
    // test t5{t4};  
    // // test t5(t4); 
    // t1.display(),t2.display(),t3.display() , t4.display(), t5.display(); 

    // int x = 3;
    // int &y = x;
    // y++;
    // cout << x << " " << y << endl;        
    return 0;
}