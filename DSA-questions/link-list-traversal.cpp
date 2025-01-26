#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};
void traversal(struct node* ptr){
    while(ptr !=NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }cout<<endl;
}
int main(){
    struct node* Head;
    struct node* second;
    struct node* third;
    // memory will be in the heap
    Head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    //assign the pointers
    Head->data = 7;
    Head->next = second;
    second->data = 14;
    second->next = third;
    third->data = 21;
    third->next = NULL;
    traversal(Head);
    return 0;   
}