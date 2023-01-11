#include <iostream>
using namespace std;
bool greater(int a, int b){return a>b; }

void digits(){
    for(int i=0; i!=10; i++){
        cout << static_cast<char>('0'+i)<<" ";
        // cout << '0'+i<<" ";
        // cout << (char)('0'+i)<<" ";
    }cout<<endl;
}
int main(void){
    bool b1 = 7;    //7!=0, so b becomes true
    bool b2{7};     //no error: narrowing

    int i1 = true;  //i1 becomes 1
    int i2{true};   //i2 becomes 1
    cout<<"b1,b2,i1,i2: "<<b1<<" "<<b2<<" "<<i1<<" "<<i2<<endl;
    bool a = true;
    bool b = true;
    bool x = a+b;   //a+b is 2, so x becomes true
    bool y = a||b;  //a||b is 1, so y becomes true
    bool z = a-b;   //a-b is 0, so z becomes false
    cout<<"a,b,x,y,z: "<<a<<" "<<b<<" "<<x<<" "<<y<<" "<<z<<endl;
    
    digits();
    char c = 255;   //255 is "all ones", hexadecimal 0xFF
    int i = c;
    cout << "c = "<<c << " i = "<<i<<endl;
}

void g(int* p){
    bool b = p; //narrows to true or false
    bool b2{p!=nullptr};    //explicit test against nullptr
    if(p){      //equivalent to p!=nullptr
        //...
    }
}
/*I prefer if(p) over if(p!=nullptr) because it more directly expresses the notion "if p is valid" and also because it is shorter. The shorter form leaves fewer opportunities for mistakes.*/
//here is a loop that outputs the integer value of any character you care to input: pg.156
void intval(){
    for(char c; cin>>c; )
        cout <<"the value of"<<c<<" is "<<int{c} <<endl;
    //the notation int{c} gives the integer value for a character c.
}