/*
Container library is a collection of classes which are implemented as generic class templates.
According to our need, we decide whether to collect our data in array,stack, linked list,etc. for 
which we have to write code to create such data structures. But Container contains all such 
classes, thus saving us time.
So,
Containers help us to implement and replicate simple and complex data structures very easily
like arrays, list, trees, associative arrays and many more.
They can be used to hold different kind of objects.
Common Containers
-vector : replicates arrays
-queue : replicates queues
-stack : replicates stack
-priority_queue : replicates heaps
-list : replicates linked list
-set : replicates trees
-map : associative arrays

Classification of Containers
-Sequence Containers (data stored linearly, one after another)
e.g. array, linked list,etc.
-Associative Containers
e.g. Sorted Data Structures like map, set,etc
-Unordered Associative containers
e.g. Unsorted Data Structures
-Containers Adapters
e.g. interfaces to sequence containers
*/
//when we use list containers to implement linked list we just have to include the header
//file and use list construtor to initialize the list

#include <iostream>
#include <list>
using namespace std; //to access list
int main(void){
    list<int> mylist;
}