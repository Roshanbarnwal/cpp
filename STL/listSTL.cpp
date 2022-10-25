/*
List class supports a bidirectional, linear list.
Vector supports random access but a list can be accessed sequentially only.
List can be accessed front to back or back to front.
*/
#include <iostream>
#include <list>
using namespace std;
int main(void){
    // list <int> l1;
    list <int> l1{11,22,22,44,77,55,33};
    list <string> l2{"India","Kathmandu","UK","Japan"};
    // cout<<l1[0]; //doesn't work for list
    //using iterator
    list <int>::iterator p = l1.begin();    //begin() gives pointer to first element
    while(p != l1.end()){   //end() gives pointer to next element of last element.
        cout<<*p<<" ";
        p++;
    }
    cout<<"\nTotal elements in the list l1 are: "<<l1.size()<<endl;
    l1.remove(22);
    cout<<"\nTotal elements in the list l1 are: "<<l1.size()<<endl;
}
/*
Creating List Object
    - list<int> l1;
    - list <int> l2{11,22};
    - list <string> l3{"Roshan","Dhiraj","Vikash"};

Useful functions of list class:
sort() 
    -sorts the list in ascending order
size()
    -returns number of element currently present in the list
push_back()
    -insert element at the last 
push_front()
    -insert element at the beginning
pop_back()
    -removes element from the last
pop_front()
    -removes element from beginning
reverse()
    -reverse the list
remove()
    -removes a value if it is present in the list otherwise remains unchanged. If the duplicates of
     the value are present, then they are also removed.
     syntax:    l1.remove(value);
clear()
    -removes all element
*/