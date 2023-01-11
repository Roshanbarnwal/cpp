//a variable that is part of a class, yet is not part of an object of the class is called static member.
// Similarly, a function that needs access to members of a class, yet doesn’t need to be invoked for a particular object, is called a static member function.
#include <iostream>
using namespace std;
class Date{
    int d,m,y;
    static Date default_date;
    public:
        Date(int dd=0,int mm=0,int yy =0);
        static void set_default(int dd, int mm, int yy);    //set dafault_date to Date(dd,mm,yy)
};
Date::Date(int dd,int mm,int yy){
    d=dd?dd:default_date.d;
    m=mm?mm:default_date.m;
    y=yy?yy:default_date.y;
}
void f(){
    Date::set_default(4,5,1945);    //call Date's static member set_default()
}
/*If used, a static member -a function or data member- must be defined somewhere. The keyword static is not repeated in the definition of a static member*/
Date Date::default_date{16,12,1770};    //definition of Date::default_date
void Date::set_default(int d,int m, int y){
    default_date = {d,m,y}; //assign new value to default_date
}
//Note that Date{} serves as a notation for the value of Date::default_date.
Date copy_of_default_date = Date{};
void f(Date);
void g(){
    f(Date{});
}
//consequently, we don't need a separate function for reading the default date. Furthermore, where the target type is unambiguously a Date, plain {} is sufficient.
void f1(Date);
void f2(Date);
void f2(int);

void g(){
    f1({});     //ok: equivalent to f1(Date{});
    // f2({});     //error: ambiguous: f2(int) or f2(Date)?
    f2(Date{}); //ok
}


