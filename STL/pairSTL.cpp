/*
pair is a template class in Standard Template Library but is not a part of container.
Syntax of using pair object
- pair <T1,T2> pair1;
  e.g. pair <string, int> p1;
*/
#include <conio.h> //to access getch();
#include <iostream>
using namespace std;
class student{
    string name; int age;
    public:
        student (const student& copy){
            name = copy.name;
            age = copy.age;
            cout<<"copy called "<<this<<endl;
        }
        student(){cout<<"default called "<<this<<endl;}
        void setStudent(string s, int a){
            name = s; age = a;
        }
        void showStudent(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
        }
        ~student(){cout<<"destructor called "<<this<<endl;}
};
int main(void){
    pair <string, int> p1;  //memory is being allocated when pair is created. sizeof(p1) = 28bytes
    pair <string, string> p2;   //sizeof(p2) = 48bytes
    pair <string, float> p3;
    getch();
    pair <int, student> p4; //default constructor is being called declaring a pair is not just about prototype
                            //instead it is about giving memory just like declaring all other variables.
                            //sizeof(p4) = 32 bytes as sizeof(student)= 28bytes
    cout<< sizeof(p4) << " "<< sizeof(p2) <<" "<< sizeof(p1)<<endl;
    getch();
    p1 = make_pair("Roshan",20);
    p2 = make_pair("Roshan","Dhiraj");
    p3 = make_pair("Vikash",99.99);
    getch();
    student s1;
    s1.setStudent("Nirmal",19);
    getch();
    p4 = make_pair(1,s1);
    getch();

    cout << p1.first << " "<<p2.second <<endl;
    // cout <<p4.first << " " << (p4.second).showStudent()<<endl;  //no operator "<<" matches these operands as cout is not defined 
                                                                    //for objects 
    cout << p4.first <<endl;
    (p4.second).showStudent();

}
/*
Inseting value
    p1 = make_pair("Rahul", 15);
Accessing pair members
    pair <string,int> p1;
    p1 = make_pair("Rahul",16);
    cout<<p1.first<<endl;
    cout<<p2.second<<endl;

Compare two pairs
    ==
    !=
    <
    >
    <=
    >=
*/