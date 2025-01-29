#include<iostream>
using namespace std;
// there are three types of insertion in the linked list
// 1. Insertion at the beginning of the linked list
// 2. Insertion at the between the linked list
// 3. Insertion at the end of the linked list
// 4. Insertion after a node in the linked list

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

struct node* InsBeg(struct node* head, int data){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data = data;
    return ptr;
}

struct node* Insbet(struct node* head, int data, int index)
{
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    struct node* p = head;
    int i = 0;
    while(i!=index-1){
        // next node always remember p-> ptr not p->p
        p=ptr->next;
        i++;
    }
        ptr->data=data; 
        ptr->next=p->next;
        // p->next=ptr->next; false 
        p->next=ptr;
        return head;
};

struct node* Insend(struct node* head, int data){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    struct node* p=head;
    int i= 0;
    struct node* end = NULL;
    while(p->next!=end){
        p = p->next;
    }
    ptr->data=data;
    ptr->next=NULL;
    p->next=ptr;
    return head;
}
struct node* InsAft(struct node* head, struct node* prevNode,int data){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=prevNode->next;
    prevNode->next=ptr;
    return head;
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

    //  traversal(Head);
    // Head = InsBeg(Head, 5);
    // Head= Insbet(Head,5,1);

    traversal(Head);
    // Head = InsBeg(Head, 5);
    Head= Insbet(Head,5,1);
    traversal(Head);

    traversal(Head);
    Head = Insend(Head,80);
    traversal(Head);

    traversal(Head);
    Head = InsAft(Head, second,10);
    traversal(Head);
    return 0;   
}
