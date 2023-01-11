#include <iostream>
using namespace std;
void confused(int* p){
    delete p;
}
int global{7};
void f(){
    int *pn = new int{7};
    int i{7};
    int* q = &i;
    confused(pn);
    confused(q);
    confused(&global);
}
void f1( char* p){
    char s[] = "Gorm";
    const char* pc = s;
    // pc[3] = 'g';    //error: pc points to constant
    pc = p;
    char* const cp = s;
    cp[3] = 'a';
    // cp = p;             //error: cp is constant
    const char *const cpc = s;
    // cpc[3] = 'a';           //error: cpc points to constant
    // cpc = p;                    //error: cpc is constant
}
/*
char *const cp; //const pointer to char
char const* pc; //pointer to const char
const char* pc2; //pointer to const char
*/
void f4(){
    int a=1;
    const int c = 2;
    const int* p1 = &c;     //ok
    const int* p2 = &a;     //ok
    // int* p3 = &c;       //error: initialization of int* with const int*
    // *p3 = 7;            //try to change the value of c
}
int main(void){
     char *p = "roshan";
    f1(p);
    f4();
    f();
}