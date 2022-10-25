#include <iostream>
using namespace std;
//class type to primitive type
class Complex{
    private:
        int a,b;
    public:
        void setData(int x, int y){a=x,b=y;}
        void showData(){cout<<"a= "<<a<<" b = "<<b << endl;}
        operator int(){
            return(a);
        }
};
int main(void){
    Complex c1;
    c1.setData(3,4);
    c1.showData();
    int x;
    // x = c1;  //no suitable conversion function from "Complex" to "int" exists
    x = c1; //x = c1.operator int(); //not exactly
    cout<<"x = "<<x<<endl;
}
/*
Second use of keyword 'operator':-
Class type to primitive type can be implemented with casting operator
operator type(){
    ...
    return (type-data);
}
*/
