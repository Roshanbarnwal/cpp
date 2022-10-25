#include <iostream>
using namespace std;

int main(void){
    int i=3;
    cout << "Welcome!"<<endl;
    try{
        if(i==1)
            throw 1;
        if(i==2)
            throw 2;
        if(i==3)
            throw 3;   //no statements run after throw statements.
        cout <<"In Try"<<endl;
    }
    catch(int e){   //if first catch doesn't match throw then next catch will be checked & so on.
        cout<<"Exception no: "<<e<<endl;    //if first catch is matched, then other catch(){} won't be checked.
    }
    catch(double e){
        cout<<"Exception no: "<<e<<endl;
    }
    cout<<"Last Line\n";
}
/*
-Exception is any abnormal behaviour, run time error.
-Exceptions are off beat situation in your program where your program should be ready to handle it with 
 appropriate response.

-> C++ provides a built-in error handling mechanism that is called exception handling
-> Using exception handling, you can more easily manage and respond to runtime errors.

try, catch, throw
-> Program statements that you want to monitor for exceptions are contained in a try block.
-> If any exception occurs within the try block, it is thrown (using throw).
-> The exception is caught, using catch, and processed.
*/
/*
Syntax:-
try{}
catch(type1 arg){}
catch(type2 arg){}
...
catch(typeN arg){}

You can make as many catch() as required provided try{} & catch(){} are consecutive
and try{} must come first otherwise error occurs.
try & catch are complementry to each other i.e. either both will exist in the program or none of them. Otherwise error.
throw can exist alone but after that statement, program will be terminated.

thrown data type must match data type to be caught.
*/