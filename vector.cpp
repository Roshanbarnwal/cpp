#include <iostream>
using namespace std;
class Vector{   
    double *elem; // pointer to the elements
    int sz; // the number of elements
    public:
        Vector(initializer_list<double>);   //initialize with a list
        //...
        void push_back(double); //add element at end increasing the size by one
        //...
        // int size() { return sz; }
        void display(){
            for(double e : elem)
                cout << e << " ";
            cout<<endl;
        }
};
Vector:: Vector(initializer_list<double> ist):elem{new double[ist.size()]},sz{ist.size()}{
    copy(ist.begin(),ist.end(),elem);   //copy from ist into elem
}
Vector read(istream& is){
    Vector v;
    for(double d; is>>d;)   //read floating-point values into d
        v.push_back(d);
    return v;
}

int main(void){
    Vector v1 = {1,2,3,4,5};
    v1.display();
}