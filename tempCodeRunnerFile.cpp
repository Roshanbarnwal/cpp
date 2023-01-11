#include<iostream>
using namespace std;
template<class t>
void func(t x)
{
    cout<<"template\n"<<x;
}
void func(int x)
{
    cout<<"integer\n"<<x;
}
int main()
{
    // temp<char>a;
    func("sandeep");
}