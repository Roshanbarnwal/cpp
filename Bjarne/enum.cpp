#include <iostream>
using namespace std;
enum colour{red,blue,green,yellow,orange = 11,purple};
enum class Color { red, blue , green };     //in c++, enum creates its own data type unlike in c where enum is 
enum class Traffic_light { green, yellow, red };    //changed to const int.

//     Traffic_light& operator++(Traffic_light& t)
// // prefix increment: ++
// {
// switch (t) {
// case Traffic_light::green: return t=Traffic_light::yellow;
// case Traffic_light::yellow: return t=Traffic_light::red;
// case Traffic_light::red: return t=Traffic_light::green;
// }
// }
// Traffic_light next = ++light; // next becomes Traffic_light::green
int main(void){
    colour background = blue;
    background = green;
    cout <<"background: " << background << endl;
    // background = 7; //a value of type "int" cannot be assigned to an entity of type "colour"
    background = (colour) 7;
    cout << red <<" "<<blue<<" "<<green<<" "<<yellow << " "<<orange << " "<<purple << endl;
    cout << "background: "<<background << endl;
    int c = colour::red;
    cout << c << endl;

    Color col = Color::red;
    Traffic_light light = Traffic_light::red;
//     Color x = red; // error : which red?
// Color y = Traffic_light::red; // error : that red is not a Color
Color z = Color::red; // OK
/*
Color is a class besides being enum so we need to overload '<<' to print Color directly.
*/
    // cout << Color::red << " " << Color::blue << " " << Color::green << " z: "<< z << endl;
// int i = Color::red; // error : Color ::red is not an int
// Color c = 2; // error : 2 is not a Color
}

/*
If you don’t want to explicitly qualify enumerator names and want enumerator values to be ints
(without the need for an explicit conversion), you can remove the class from enum class to get a
‘‘plain enum’’
*/