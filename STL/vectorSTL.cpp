/*
The most general purpose container is the Vector. It supports a Dynamic Array. What is Dynamic Array?
Whenever a vector is filled up, its size will be doubled when new element is to be inserted. e.g. size of vectors
changes as: 0->1->2->4->8->16->32... if its initial_capacity is 0 which is by default capacity when a vector is created.
But if the vector is initialized during declared, then its initial capacity will be the number of element present during initialization.
If it is 3, then size will change as: 3->6->12->24->...

Array size is fixed, no flexibility to grow or shrink during execution.
Vector can provide memory flexibility.
Vector being a dynamic array, doesn't needs size during declaration.
*/
#include <iostream>
#include <vector>
using namespace std;
int main(void){
    // vector <int>v1;
    vector <int>v1 {1,2,3};
    //size() returns number of elements present in the vector while capacity() returns the blocks of memory present in the vector.
    cout<<v1.size()<< " "<<v1.capacity()<<endl;
    v1.push_back(4);
    cout<<v1.size()<< " "<<v1.capacity()<<endl; //
    vector <char> v2(4);
    vector <char> v3(4,'a');
    cout<<v3[0]<<" "<<v3[1]<<" "<<v3[2]<<" "<<v3[3]<<endl;
    for(int i: v1)
        cout<<i<<" ";
    
    vector <int> v4;
    for(int i=0; i<10; i++)
        v4.push_back(10*(i+1));
    cout<<"Current capacity of v4 is: "<<v4.capacity()<<endl;
    v4.pop_back();
    cout<<"After popping, Current capacity of v4 is: "<<v4.capacity()<<endl;
    v4.pop_back();
    cout<<"After popping, Current capacity of v4 is: "<<v4.capacity()<<endl;
    v4.pop_back();
    cout<<"After popping, Current capacity of v4 is: "<<v4.capacity()<<endl;
    v4.at(6) = 110;
    // v4[7] = 110; //upto size of vector only working just like at();
    cout<<"First element in v4 is: "<<v4.front()<<endl;
    cout<<"Last element in v4 is: "<<v4.back()<<endl;

    //using iterator to add/remove elements from any index of vector
    vector <int> :: iterator it=v1.begin(); //iterator it is pointing to 0 index now.
    cout<<"v1(2) is "<<v1.at(2)<<endl;
    v1.insert(it+2,35);     //'it+2' means iterator is pointing to 2nd index i.e. 3rd element.
                        //replaces value at 2nd index with '35'.
    cout<<"v1(2) is "<<v1.at(2)<<endl;
}
/*
Initialize during declaration:
    vector<string> v {"Roshan","Dhiraj"};
More vector declarations:
    vector <int> v1;
    -zero length vector
    vector <char> cv(5);
    -creates a 5 element char vector
    vector <char> cv(4,'a');
    -initializes 4 elements char vector with 'a'

Relational operators: ==, !=, >, <, >=, <=

Subscript operator[]
    -subscript operator is also defined for vector.

push_back()
    -is a member function, which can be used to add value to the vector at the end.So, capacity increases if needed.
pop_back()
    -removes the last element but capacity doesn't reduces once set.
capacity()
    -It returns the capacity of the vector
    -This is the number of elements it can hold before it will need to allocate more memory. 
size()
    -returns the number of elements currently present in the vector
clear()
    -removes all the elements from the vector making its size 0 but capacity doesn't changes
at()
    -works same in case of vector as it works for array
    -returns the element at ith index in the vector vector_name.
    -it can access upto size of vector only. beyond it will terminates program(out_of_range exception);
front()
    -returns the first element of the vector
back()
    -returns the last element of the vector
*/
