#include <iostream>
using namespace std;
//pg 206
void f(){
    int var = 1;
    int& r{var};    //r and var now refer to the same int
    int x= r;       //x becomes 1

    r = 2;          //var becomes 2
}

int main(void){
    system("cls");  //For windows
    int var = 1;    //ok: r1 initialized
    int& r1{var};   
    // int& r2;        //error: initializer missing
    extern int& r3; //ok: r3 initialized elsewhere
    cout<<"hello\n";

    // double& dr = 1;    // error: lvalue needed
    const double& cdr = 1;  //ok    //double temp = double{1};   //first create a temporary with the right value
                                    //const double& cdr{temp};   //then use the temporary as the initializer for cdr      
                                    
}
/*
When we write extern some_data_type some_variable_name;  no memory is allocated. Only property of variable is anounced.
Multiple declarations of extern variable is allowed within the file. This is not the case with automatic variables.
Extern variable says to compiler  ” go outside my scope and you will find the definition of the variable that I declared.”
Compiler belives that whatever that extern variable said is true and produce no error. Linker throws an error when it finds no such variable exists.
When an extern variable is initialized, then memory for this is allocated and it will be considered defined.
https://www.geeksforgeeks.org/understanding-extern-keyword-in-c/
*/