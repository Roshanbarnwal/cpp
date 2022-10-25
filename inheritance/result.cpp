#include <iostream>
using namespace std;

class student{
    protected:
    int roll,m1,m2;
    public:
    void getdata(int a,int b,int c){
        roll = a,m1=b,m2=c;
    }
    void display(){
        cout<<"roll: "<<roll<<"m1: "<<m1<<"m2: "<<m2<<endl;
    }
};
class sports{
    protected:
    int sm;
    public:
    void getdata(int a){sm=a;}
    void display(){cout<<"sm: "<<sm<<endl;}
};
class result: public student, private sports{
    public:
    void display(){
        sm = 10;
        sports s;    //child can only access protected
        s.getdata(5);
        sports::getdata(6);
        sports::display();
        float perc;
        perc = (m1+m2+sm)/3.0;
        cout << "Roll NO: "<<roll<<endl;
        cout << "THe percentage is: "<<perc<<endl;
    }
};

int main(void){
    result r;
    r.student::getdata(2,3,4);
    // r.sports::getdata(5); //as sports is privately inherited,  its pubilc member becomes private of child so no outside.
    sports s;
    s.display();
    r.display();
    return 0;
}