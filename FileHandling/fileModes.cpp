#include <fstream>
#include <iostream>
using namespace std;

int main(void){
    ofstream fout;
    fout.open("myfile.txt",ios::app);
}
/*
opening a file means bringing file from hard disk into the RAM to perform operations on it.
We can open a file in more than one mode.
    e.g. fout.open("myfile.txt",ios::app:ios::binary : ios::in);
Though ios::in won't give compiler error but it is illogical to open the file in read mode
with output data stream as we fout won't have reading method which is present in 'ifstream'.
*/
/*
File Opening Modes:
a.) ios :: in => input/read     //it is default input stream mode 
b.) ios :: out => output/write  //it is default output stream mode which will erase old content of file
                                //and then open the file.
c.) ios :: app => append
d.) ios :: ate => update
e.) ios :: binary => binary
*/
/*
Text mode vs binary mode
a.) Text mode is the default opening mode i.e. unless we don't specify binary mode, it is in text mode.
b.) Binary mode can be specified with ios::binary
c.) In binary mode, special characters like '\n', '\t' are not recognised & they will be written as 
    it is. But in text mode, special characters are treated with their meaning and written accordingly.
*/