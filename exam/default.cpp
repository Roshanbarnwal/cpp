#include <iostream>
using namespace std;
void f(int x=0, int y=0 );
int main(void){
    f();
    return 0;
}
void f(int x = 0, int y = 0){
    cout <<x <<y <<endl;
}