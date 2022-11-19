#include <fstream>
#include <iostream>
using namespace std;
//using constructor in place of open() method, the particular stream will be attached to a single file for the 
//entire program while we can handle multiple files with a single stream object if it is created using open().
int main(void){
    ifstream fin;   //generate input data stream to take input whose one end is 'fin'
    fin.open("myfile.txt"); //connects 'fin' to "myfile.txt"
    //cin is object of istream_withassign(child of istream) whose input stream is keyboard by default
    //fin is object of ifstream(child of istream) whose input stream is "myfile.txt".
    char ch;
    // fin>>ch;    //extraction operator '>>' will only read newline/tab/space but also discards it.
    ch = fin.get(); //this will read every character
    while(!fin.eof()){   //fin.eof() return 1 if end of file is encountered otherwise 0.
        cout<<ch;
        // fin>>ch;
        ch = fin.get();
    }
    fin.close();
    
}
/*
extraction operator '>>' means it extracts data from file or keyboard & puts into variable
insertion operator '<<' means it inserts data onto screen or file.
*/
/*
To represent data stream, there are pre-defined classes in c++ and by creating their objects
we handle file operation.
ifstream, ofstream , fstream are 3 classes for file handling.
*/