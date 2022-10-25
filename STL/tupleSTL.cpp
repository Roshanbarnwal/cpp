#include <iostream>
#include <tuple>
using namespace std;

int main(void){
    tuple <string,int,int> t1;
    t1 = make_tuple("Roshan",32,84);
    cout<<get<0>(t1)<<" "<<get<1>(t1)<<" "<<get<2>(t1)<<endl;
}
/*
Tuple
Just like in pair, we can pair two heterogeneous objects, in tuple we can pair multiple objects.
Syntax of using tuple object:
    tuple <T1,T2,T3> tuple1;
    e.g.
        tuple <string, int , int> t1;
Inserting value:
    t1 = make_tuple("India",16,10);
Accessing tuple membes:
    std::get<0>(t1);
    std::get<1>(t1);
    std::get<2>(t1);
*/