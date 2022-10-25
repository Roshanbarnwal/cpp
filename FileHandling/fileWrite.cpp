#include <fstream>
#include <iostream>
#include <conio.h>  //to access getch(); //it will ask a character
using namespace std;

int main(void){
    ofstream fout;  //when we open a file with object fout, the data stream will be created between fout & the file.
                    //whatever fout does will be reflected on the file instead of our screen.
                    
    fout.open("myfile.txt");    //file will be created in hard disk if doesn't exist & then brought in the RAM
                            //where its data will be manipulated. Till now no data is being inserted so the fill 
                            //will be empty in hard disk.
    getch(); 
    //fout won't read new line character into the file.
    fout<<"hello";  //5 bytes of data will be inserted into the file but the file is still open in RAM. So it won't
                    //reveal in the hard disk unless all the data will be copied from RAM to file present in hard
                    //disk. So, as long as file is open, it won't show changes made in file in our hard disk.
    getch();
    fout.close();//now changes made in the file will be visible in our hard disk.
    //here, getch() will help to evaluate how file is changing between RAM & hard disk. Open both screen & observe.
    getch();    //give a character.
}

/*
classes heirarchy in c++ :-

ios :- 1) istream --> a) ifstream
                      b) iostream --> i) fstream
                      c) istream_withassign ==> 'cin' is its object & '>>' is method in parent class istream.

       2) ostream --> a) ofstream
                      b) iostream --> i) fstream
                      c) ostream_withassign ==> 'cout' is its object & '<<' is method in its parent class ostream.
            
    Note: iostream is child class to both istream &  ostream having its own child class 'fstream'.
*/