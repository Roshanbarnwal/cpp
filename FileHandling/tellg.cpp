#include <fstream>
#include <iostream>
using namespace std;
//input stream => reading from file
//output stream => writing to file
int main(void){
    ifstream fin;
    fin.open("myfile.txt");
    int pos;
    pos = fin.tellg();
    cout << pos;
    char ch;
    fin>>ch;
    cout << fin.tellg()<<endl;
    fin>>ch;
    cout << fin.tellg()<<endl;
    fin.close();
    //writing mode
    ofstream fout;
    fout.open("myfile.txt",ios::app);
    cout <<fout.tellp()<<endl;    //since file is opened in app mode, fout should point to last index
    fout << " file needs to be closed to make changes in file.";//but for fout, the last index is 0.
    cout << fout.tellp()<<endl;
    fout.close();
}
/*
-> tellg() is predefined reading member function in istream class
-> its prototype is:
        streampos tellg();
    :streampos is basically a class/type to express absolute positions within streams.
-> returns the position of the current character in the input stream.
*/
/*
-> tellp() is Defined in ostream class (writing pointer)
-> Its prototype is
        streampos tellp();
-> returns the position of the current character in the output stream
*/