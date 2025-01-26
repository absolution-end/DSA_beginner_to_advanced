#include<iostream>
using namespace std;

int show(int arr[],int size){
    for(int i;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
int d(int arr[], int size,int del, int index){
    for(int i=index;i<size-1;i++){
            arr[i]=arr[i+1];
        }
    return 1;
}

int main(){
    int arr[100]={33,35,74,23,64};
    // int size =sizeof(arr)/sizeof(arr[0]);
    int size = 5;
    show(arr,size);
    int del, index;
    cout<<"Enter the number you want to delete: ";
    cin>> del>>index;
    d(arr, size, del, index);
    size-=1;
    return 0;
}