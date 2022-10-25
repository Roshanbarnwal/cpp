#include <iostream>
using namespace std;
class product;
class product{
    int m,n;
    public:
        product(){cout<<"product default called "<<this<<endl;}
        // product(const product& copy){                    //if this is left as it is, then the new object will
        //     cout<<"product copy is called "<<this<<endl; //have garbage value as we have not assigned any value
        // }                                                //to 'm' & 'n' from 'copy' passed into parameter.

        product(const product& copy){
            m = copy.m;                 //'m' & 'n' are private member of product i.e. 'copy' so how am I accessing
            n = copy.n;                 //'through another object of same class' ...I don't know what am I asking??
        }
        ~product(){cout<<"product destructor called "<<this<<endl;}

        void setData(int x, int y){
            // m{5};    //{} is used to initialize when variable is first given memory
            m=x,n=y;
        }
        void showData(){cout<<"m = "<<m<<" n= "<<n<<endl;}
        int getM(){return m;}
        int getN(){return n;};
};
class item{
    private:
        int a,b;
    public:
        item(){cout<<"item default called "<<this<<endl;}
        ~item(){cout<<"item destructor is called "<<this<<endl;}
        void showData(){cout<<"a = "<<a<<" b= "<<b<<endl;}
        item(product p){
            cout<<"item copy called "<<this<<endl;
            a = p.getM();
            b = p.getN();   //member function is not recognised when product is defined below item class.
        }
};
int main(void){
    item i1;
    product p1;
    p1.setData(3,4);
    // i1 = p1; //
    i1.showData();
    i1=p1;
    i1.showData();
}
/*
a class can be assigned to another class by two ways:
 1.) Conversion through constructor
    e.g. i1 = p1 =>constructor will be made in i1
 2.) Conversion through casting operator
    e.g. i1 = p1 =>casting operator made in p1
*/