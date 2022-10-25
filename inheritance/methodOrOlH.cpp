#include <iostream>
using namespace std;
class Car{
    public:
        void shiftGear(){
            cout <<"SHiftgear in Car\n";
        }
        void f2(){}
};
class SportsCar:public Car{
    public:
    void shiftGear(){   //Method Overriding
        cout <<"Shiftgear in sportsCar\n";
    }
    void f2(int x){}    //Method Hiding
};
void main(){
    SportsCar obj;
    obj.shiftGear();    //SportsCar
    // obj.f2();   //error
    obj.f2(4); //B
}