#include <iostream>
using namespace std;
template <class T> class ArrayList{
    struct ControlBlock{
        int capacity;
        T* arr_ptr;
    };
    ControlBlock *s;    //why struct keyword is not being used as it is needed in C.
    public:
        ArrayList(int capacity){
            s = new ControlBlock;
            s->capacity = capacity;
            s->arr_ptr = new T[capacity];
        }
        void addElement(int index, T data){
            if(index >=0 && index < s->capacity){
                s->arr_ptr[index] = data;
            }else{
                cout<<"\nArray index is not valid\n";
            }
        }
        void viewList(){
            for(int i=0; i<s->capacity; i++)
                cout<< s->arr_ptr[i] << " ";
            cout << endl;
        }
};
int main(void){
    int data;
    // ArrayList <float> list(4);   //we need to specify data-type while creating object
    ArrayList <int> list(4);
    list.addElement(0,3.2);
    list.addElement(1,4.2);
    list.addElement(2,5.2);
    list.addElement(3,6.2);
    list.viewList();
    return 0;
}
/*
Class template is also known as generic class
Format:
    template <class type> class class_name{...};
For object creation:
    class-name<data-type> variable_name;
*/