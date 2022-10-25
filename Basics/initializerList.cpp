#include <iostream>
using namespace std;
class Dummy{
    private:
        int a,b;
        const int x;
        int &y;
    public:
        Dummy(int &n):x(5),y(n){}
};
int main(void){
    int m=6;
    Dummy d1(m);
}
/*
constant & reference variable need to be initialized right when they are created. Since we can not initialize them while defining class because they
don't have memory until the object is created, so we use initializer list method to initialize them.
*/