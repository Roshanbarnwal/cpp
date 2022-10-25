#include <stdio.h>
#define siz 90
int main(void){
    const int size = 10;
    // char name[size]; //not working in vscode
    printf("%d\n",size);
    int m = 12;
    // char name1[m];   //expression must have a constant value//not working in vscode
    int arr[siz];
    printf("macro: %d\n",siz);
    int n;
    scanf("%d",&n);
    // int arr1[n];
}