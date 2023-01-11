#include <iostream>
#include <vector>
using namespace std;

template<class K, class V>
class Map{
    public:
        V& operator[](const K& v);  //return the value corresponding to the key v
        pair<K,V> begin(){return &elem[0];}
        pair<K,V> end(){return &elem[0]+elem.size();}
    private:
        vector<pair<K,V>>elem;      //{key,value} pairs
};
template<class K,class V>
V& Map<K,V>::operator[](const K& k){
    for(auto& x: elem)
        if(k==x.first)
            return x.second;
    elem.push_back({k,V{}});    //add pair at end
    return elem.back().second;  //return the (default) value of the new element
}

int main(void){
    //count the number of occurrences of each word on input
    Map<string, int> buf;
    for(string s; cin>>s;)++buf[s];

    // for(const auto& x: buf)
        // cout<<x.first<<": "<<x.second<<'\n';
}