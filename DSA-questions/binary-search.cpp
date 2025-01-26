#include<iostream>
using namespace std;

int binary(int arr[],int target, int low, int high){
    if (low>high) {
        return -1;
    }
    int mid = (high+low)/2;
    if(arr[mid]==target){
        return mid;
    }else if (arr[mid]>target){
        return binary(arr,target,low,mid-1);
    }else if (arr[mid]<target)
    {
        return binary(arr,target,mid+1,high);
    }
    
    
    return 0;
}
int main(){
    int arr[10] = {23,34,65,97,120,8561};
    int low = 0, high = 9;
    cout<<"enter the desired element: "<<endl;
    int mid;
    cin>>mid;
    int result= binary(arr,mid,low,high);
    cout<<"the element is at index "<<result<<endl;
    return 0;
}
