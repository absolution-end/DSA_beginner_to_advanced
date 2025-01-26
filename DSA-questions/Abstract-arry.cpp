#include<iostream>
using namespace std;

struct myArray
{
    int total_size;
    int used_size;
    int * ptr;
};

void createArray(struct myArray* a, int tsize, int usize){
    // (*a).total_size = tsize;
    // (*a).used_size = usize;
    // (*a).ptr = (int*)malloc(tsize*sizeof(int));
    a-> total_size =tsize;
    a->used_size = usize;
    a->ptr=(int*)malloc(tsize*sizeof(int));
}
void setval(struct myArray *a){
    int n;
    for(int i=0;i<a->used_size;i++){
        cout<<"Enter elements:  "<<i+1;
        cin>>n;
        (a->ptr)[i]=n;
    }
}
void show(struct myArray *a)
{
    for(int i=0;i<a->used_size;i++){
        cout<<(a->ptr)[i]<<endl;
}
}

int main()
{
    struct myArray marks;
    createArray(&marks,10,2);
    cout<<"Using setval";
    setval(&marks);
    cout<<"Using show";
    show(&marks);
    return 0;
}