#include <iostream>
using namespace std;
void fun(){
    throw 10;
}
int main(void){
    int i=10;
    cout << "Welcome!"<<endl;
    try{
        if(i==1)
            throw 1;
        if(i==2)
            throw "hello";
        if(i==3)
            // throw;   //if no value is thrown, then run time error occur & program will be terminated.
            throw 4.5; 
        if(i==10)
            fun();  //throw can be written anywhere provided catch(){}  somehow catches it.
        cout <<"In Try"<<endl;
    }
    catch(int x){   //for i==1, it will execute but inner if statements won't.
        if(x == 10){
            cout << "Exception no: "<<x<<endl;
        }
    }
    catch(...){     //it will catch any type of throw but we can't use the received argument.(same as only data type is given parameter)
        cout<<"Exception no: "<<endl;   
    }
    cout<<"Last Line\n";
}
/*
-> When an exception is caught, arg will receive its value.
-> If you don't need access to the exception itself, specify only type
    in the catch clause -- arg is optional.
-> Any type of data can be caught, including classes that you create.
*/
/*
-> The general form of the throw statement is: throw exception;
-> Throw must be executed either within the try block proper or from any function that the code within the block calls
*/
