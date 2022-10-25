#include <iostream>
using namespace std;
class Array{
    private:
        int a[10];
    public:
        void insert(int index, int value){
            a[index] = value;
        }
};
class Stack: private Array{
    int top;
    public:
        void push(int value){
            insert(top,value);
            // a[0] = 9;
        }
};
int main(void){
    Stack s1;
    s1.push(34);
    // s1.insert(2,56);
    return 0;
}
/*
VVVVVVI :- If protected & public members are inherited from parent class, then they are accessible inside child class
no matter what is the mode of inheritance. Of course, outside class only public member(either that of parent or child)
is accessible.

In short, private member of parent class is not accessible outside its definition, not even its child class.
private member are always inherited but never accessible.
protected & public are not only inherited(any mode) but also accessible inside child class. Outside class access is
decided by mode of inheritance.
*/
/*
                | Private member (parent)     Protected member (parent)            Public Member (parent)
private mode:   |inherited but NA. becomes  |becomes private member of child.    |becomes private member of child.
                |private member of child    |Accessible inside 'class' only.     |Accessible inside 'class' only.

protected mode: |inherited but NA. becomes  |becomes protected member of child.  |becomes protected member of child
                |private member of child.   |Accessible inside class only.       |Accessible inside class only.
                
public mode:    |inherited but NA. becomes  |becomes protected member of child.  |becomes public member of child.
                |private member of child.   |Accessible inside class only.       |Accessible everywhere.
*/