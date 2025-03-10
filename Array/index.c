// insertion in array
#include<stdio.h>
void display(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d\n", arr[i]);
    }
    printf("\n");
}
void sortedInsertion(int arr[], int size, int element, int capacity, int index){
    if(size>=capacity){
        return -1;
    }
    for(int i=size-1; i>=index; i--){
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;
}   
int main(){
    int arr[100] = {7,8,12,27,88};
    int size = 5, element = 45, index = 3;
    display(arr, size);
    sortedInsertion(arr, size, element, 100, index);
    display(arr, size+1);
    return 0;
}