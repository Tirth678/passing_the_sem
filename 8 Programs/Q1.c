// Write a program in C to perform insertion at 3 locations in an Array. (Insertion
// should be possible at locations -Middle, Beginning & at the end of an Array).
#include<stdio.h>
int insert(int arr[], int size, int element, int capacity, int index){
    if(size>= capacity){
        return -1;
    }
    for(int i=size-1; i>=index; i--){
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,};
    int size=8;
    int capacity=10;
    int element=10;
    int index=3;
    int result=insert(arr, size, element, capacity, index);
    size+=1;

}