#include<iostream>
using namespace std;

int linear(int arr[], int elem, int len){
    for(int i=0;i<len;i++){
        if(arr[i]==elem){
            cout<<i;
            return i;
    }
    }
    return 0;
}

int main(){
    int arr[5]={32,84,1,8,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    linear(arr,84,size);
    return 0;
}