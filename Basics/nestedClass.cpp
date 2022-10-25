#include <iostream>
#include <string.h>
using namespace std;
class Student{
    private:
        int rno;
        char name[20];
        class Address{
            private:
                int houseno;
                char street[20];
                char city[20];
                char state[20];
                char pincode[7];
            public:
                void setAddress(int h, char *s, char *c, char *st,char *p){
                    houseno = h;
                    strcpy(street,s);
                    strcpy(city,c);
                    strcpy(state,st);
                    strcpy(pincode, p);
                }
                void showAddress(){
                    cout<<"\n"<<houseno<<endl;
                    cout<<street<<" "<<city;
                    cout<<" "<<pincode<<endl;
                    cout<<state<<endl;
                }
        };
        Address add;
        public:
            void setRno(int r){rno = r;}
            void setName(char *n){
                strcpy(name,n);
            }
            void setAddress(int h, char *s, char *c, char *st, char *p){
                add.setAddress(h,s,c,st,p);
            }
            void show_Student(){
                cout<<"Student Data: "<<endl;
                cout <<rno<<" ";
                cout <<name<<" ";
                add.showAddress();
            }
};
int main(void){
    Student s1;
    s1.setRno(100);
    s1.setName("Roshan");
    s1.setAddress(301,"hanuman gali","bhopal","462042","MP");
    s1.show_Student();
}
/*
-> Class inside a class is called nested class
-> A nested class is a member and as such has the same access rights as any other member.
-> The members of an enclosing class have no special access to members of a nested class;
    the usual access rules shall be obeyed.

Q1.) Hoow to make objects of nested class (inside and outside the enclosed class) ?
Ans: For inside, see above code.
     For outside (given inner class is public member of enclosed class), 
                enclosed_class_name::inner_class_name variable_name;

Q2.) What is the role of access modifier for nested class?
Ans: if nested class is private member of enclosed, then it can't be accessed outside enclosed class.
     Even nested class is a member of enclosed class, its private member can't be accessed within the 
     enclosed class.
*/