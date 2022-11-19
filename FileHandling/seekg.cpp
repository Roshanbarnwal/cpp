#include <fstream>
#include <iostream>
using namespace std;
//seekg() & seekp()
//g->get/read
//p->put/write
int main(void){
    ifstream fin;
    fin.open("myfile.txt",ios::app);
    cout << fin.tellg() << endl; //get position of file pointer
    cout << (char)fin.get()<<(char)fin.get()<<endl;
    cout << fin.tellg() <<endl; //fin pointing to 2th index
    fin.seekg(0); //fin pointing to 0th index now.
    cout << (char) fin.get() << endl;
    cout << fin.tellg() << endl;
    fin.seekg(3,ios_base::cur); //move fin to 2 positions further from current position
    cout <<(char)fin.get() <<endl;
    fin.seekg(1,ios_base::beg);
    cout <<"1 position from beg: "<<(char)fin.get()<<endl;
    fin.seekg(-5,ios_base::end);
    cout<<"5 position behind end: "<<(char)fin.get()<<endl;
    fin.close();
}
/*
-> Defined in istream class
-> Its prototype has two forms:
    istream& seekg(streampos pos);
    istream& seekg(streamoff off, ios_base::seekdir way);
-> 'pos' is new absolute position within the stream (relative to the beginning).
-> 'off' is offset value, relative to the way parameter
-> 'way' values ios_base::beg, ios_base::cur and ios_base::end
    :way is predefined constant value :-beginnin, current & end represented as above.

    beginning starts from 0th index.
    end starts from eof().
*/
/*
Defined in ostream class
Its prototype is:
    ostream& seekp(streampos pos);
    ostream& seekp(streamoff off, ios_base::seekdir way);

-> 'pos' is new absolute position within the stream (relative to the beginning)
-> 'off' is offset value, relative to the way parameter
-> 'way' values ios_base::beg, ios_base::cur and ios_base::end
*/