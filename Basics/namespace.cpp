#include <iostream> //contains many namespace including std.
using namespace std;
namespace MySpace{
    int a;
    int f1();
    class A{
        public:
            void fun1();
    };
}
//since we are defining declarations inside namespace, we need to specify which namespace does the definition belongs
int MySpace::f1(){      //no matter we are declaring 'using namespace' before definition or after.
    cout <<"Hello f1\n";
}
void MySpace::A::fun1(){
    cout<<"Hello fun1\n";
}
using namespace MySpace;
int main(void){
    a = 4;
    f1();
    A obj;
    obj.fun1();
}
/*
-> Namespace is a container for identifiers
-> It puts the names of its members in a distinct space so that they don't conflict with the names in other 
    or global namespace.
-> Namespace is just like a header file where we used to declare all the functions prototype,variables,etc. except
    one thing which is: We create a block with a name inside which our all declarations will be there.
    It helps in a way that say we included 2 header files & a same declaration is present in both header files 
    then there will be ambiguity.
    But with namespace we can specify which block of declarations we are trying to access.
-> Namespace is also a keyword & we can also create one inside our source file.
*/
/*
How to create namespace?
Ans: Syntax:-
            namespace MySpace{
                //Declarations
            }
    1.) Namespace definition doesn't terminates with a semicolon like in class definition.
    2.) The namespace definition must be done at global scope, or nested inside another namespace.
    3.) You can use an alias name for your namespace name, for ease of use.
        e.g. namespace ms = MySpace;
    4.) Namespace is not a class, you cannot create instance of namespace.

Unnamed namespaces
-> There can be unnamed namespaces too.
Syntax:
        namespace{
            //declarations
        }
*/
/*
NAMESPACE CAN BE EXTENDED
A namespace definition can be continued and extended over multiple files, they are not redefined
or overridden i.e. two namespace with same name will be merged and treated as 1 single namespace.
e.g. File1.h -> namespace MySpace{
                    int a,b;
                    void f1();
                }
    File2.h -> namespace MySpace{
                    int x,y;
                    void f2();
                }
*/
/*
ACCESSING MEMBERS OF NAMESPACE
-> Any name(identifier) declared in a namespace can be explicitly specified 
   using the namespace's name and the scope resolution :: operator with the 
   identifier.
*/
/*
'using' keyword allows you to import an entire namespace into your program 
a global scope. It can be used to import a namespace into another namespace 
or any program.
e.g. File1.h -> namespace MySpace{
                    int a,b;
                    class A{//some code}
                }
     File2.h -> #include "File1.h"
                namespace MyNewSpace{
                    using namespace MySpace;
                    int x,y;
                    A obj;
                }
*/