/*
Array is a linear collection of similar elements.
Array container in STL provides us the implementation of static array.
Use header array -#include <array>

- array <object_type, array_size> array_name;
- It creates an empty array of object_type with maximum size of array_size.
*/
#include <iostream>
#include <array>
using namespace std;

int main(void){
    // array<int,5> arr;    //creates object of array  
    array<int,8> arr = {11,21,33,44,55};
    cout<<arr.at(2)<<endl;
    // cout<<arr.at(5)<<endl;   //terminate called after throwing an instance of 'std::out_of_range'
    cout<<arr[2]<<endl;
    cout<<arr[9]<<endl;
    cout<<arr.front()<<endl;
    cout<<arr.back()<<endl;

    array<int,8> arr2 = {1,2,3,4,5};
    arr2.at(5) = 6;
    arr2[6] = 7;
    arr.swap(arr2);
    for(int i: arr)
        cout << i <<" ";
    cout<<endl;
    for(int i: arr2)
        cout << i <<" ";
    cout<<endl;

    cout<<arr.size()<<endl;
    arr.fill(10);
    for(int i: arr)
        cout << i <<" ";
    cout<<endl;
}
/*
Following are the important and most used member functions of array template
- at => This method returns value in the array at the given range
        If the given range is greater than the array size, out_of_range exception is thrown. As there would not
        have been catch() statement , the program get terminated after throw();
- [] operator => The use of operator [] is same as it was for normal arrays.
                 But it won't throw exception when index is illegal but access garbage value.

- front() => returns the first element in the array
- back() => returns the last element in the array. For array of size 8, if we initialize only 5 elements, then rest are
            initialized with 0.So, last element will be 0.

- fill() => This method assigns the given value to every element of the array, no matter the array is empty or filled.

- swap() => This method swaps the content of two arrays of same type and same size
            It swaps index wise, thus element of index i of first array will be swapped with the element of index i of the second array.
            first_array.swap(second_array);

- size() => returns the number of element present in the array
- begin() => returns the iterator pointing to the first element fo the array
- end() => returns an iterator pointing to an element next to the last element in the array.

*/