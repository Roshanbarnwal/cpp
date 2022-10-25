#include <iostream>
using namespace std;
template <class T> T big(T a, T b){
    if(a > b)
        return a;
    else
        return b;
};
int big(int a, int b){
    if(a>b)
        return a;
    else
        return b;
}
double big(double a, double b){
    if(a>b)
        return a;
    else
        return b;
}
int main(void){
    //template function is equivalent to 2 big functions.
    cout << big(4,5)<<endl;
    cout << big(5.6,3.4)<<endl;

}
/*
1.) The keyword template is used to define function template and class template
2.) It is a way to make your function or class generalize as far as data type is concern.
3.) Template is generic in java. It does work for integer unlike java which works for only non-primitive.
4.) Function template is also known as generic function
    Format:
       a.)If arguments are of same type
        template <class whatever> whatever func_name(whatever arg1, ...);
       b.)If arguments are of 2 different type
        template <class T, class V> (T or V as per return type) func_name(T a, V b, ...); 
       c>) If arguments are of different types, accordingly we can increase the tmplate arguments.
*/