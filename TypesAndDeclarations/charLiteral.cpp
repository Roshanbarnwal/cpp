#include <iostream>
using namespace std;
//pg: 159,176
void fun(){
    int x,y;
    cout<<x<<" "<<y<<endl;
}
int main(void){
    char v1[] = "a\xah\129";    //6 chars: 'a' '\xa' 'h' '\12' '9' '\0'
    char v2[] = "a\xah\127";    //5 chars: 'a' '\xa' 'h' '\127' '\0'
    char v3[] = "a\xad\127";    //4 chars: 'a' '\xad' '\127' '\0'
    char v4[] = "a\xad\0127";   //5 chars: 'a' '\xad' '\012' '7' '\0' 
    cout<< sizeof(v1) << " "<<sizeof(v2)<<" "<<sizeof(v3)<<" "<<sizeof(v4)<<endl;

    int a, b;
    cout<<a <<" "<<b<<endl;
    fun();
}