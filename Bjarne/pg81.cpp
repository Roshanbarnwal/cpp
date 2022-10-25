/*Since use() doesn't know about Vector_container but only knows the Container interface, it will work just as well for a different implementation of a Container. */
#include <iostream>
using namespace std;
class Container{
    public:
        virtual double& operator[](int ) = 0;
        virtual int size() const = 0;
        virtual ~Container(){}
};
void use(Container& c){
    const int sz = c.size();
    for(int i=0; i!=sz; ++i)
        cout << c[i] << '\n';
}

class Vector_container : public Container{  //Vector_container implements Container
    Vector v;
    public:
        Vector_container(int s) : v(s){}    //vector of s elements
        ~Vector_container(){}

        double& operator[](int i){return v[i];}
        int size() const {return v.size(); }
};

void g(){
    Vector_container vc{10,9,8,7,6,5,4,3,2,1,0};
    use(vc);
}

class List_container : public Container{    //List_container implements Container
    list<double> id;    //(standard library) list of doubles
    public:
        List_container(){}  //empty List
        List_container(intializer_list<double> il):id{il}{}
        ~List_container(){}
        
        double& operator[](int i);
        int size() const{ return id.size(); }
};
double& List_container::operator[](int i){
    for(auto& x: id){
        if(i==0) return x;
        --i;
    }
    throw out_of_range("List container");
}

void h(){
    List_container ic = {1,2,3,4,5,6,7,8,9};
    use(ic);
}