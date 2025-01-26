#include<iostream>
using namespace std;
void display(int arr[], int n){
    cout<<"its working: "<<endl;
    for(int i;i<n;i++){
        cout<<arr[i]<<" ";
    
    }cout<<"now end";
}
int sinsert(int arr[],int m,int insert,int capacity,int index){
    if(m>=capacity){
        return -1;
    }
    for(int i=m-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index] = insert;
}
int main(){
    int arr[100] ={1,5,6,7,2};
    int m = sizeof(arr)/sizeof(arr[0]);
    display(arr,m);
    int insert, index;
    cin>>insert>>index;
    sinsert(arr,m,insert,100,index);
    display(arr,m);
    return 0;
}