#include <iostream>
using namespace std;
class Vector{
    double *elem;
    int sz;
    public:
        Vector():sz{0}{}
        Vector(int s) :elem{new double[s]}, sz{s} { }
        Vector(initializer_list<double> ist):elem{new double[ist.size()]}, sz{ist.size()} {
            cout<<"initializer_list constructor is called \t"<< this<<endl;
            copy(ist.begin(),ist.end(),elem);
        }
        double& operator[](int i){
            return elem[i];
        }
        int size(){
            return sz;
        }
        void push_back(int i){
            //...
        }
        void display(){
            cout<<"the elements are: ";
            for(int i=0; i<sz; i++)
                cout<< elem[i] << " ";
            cout<<endl;
        }
};
Vector read(istream& is){
    Vector v;
    for(double d; is>>d;){
        v.push_back(d);
    }
    return v;
}

int main(void){
    Vector v{1,2,3,4};
    v.display();
}
/*
a function contains a object in its arguments. Can we pass derived objects as well in that function?
*/
