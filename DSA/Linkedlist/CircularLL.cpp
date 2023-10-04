#include<iostream>
#include<stdio.h>
using namespace std;

class node{
    public:
    int data;
    node*next;
}*first=NULL;

void create(int A[],int n){
    int i;
    node *t,*last;
    first=new node;
    first->data=A[0];
    first->next=first;
    last=first;

    for(int i=1;i<n;i++){
        t=new node;
        t->data=A[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }
}
void display(node *p){
    do{
        cout<<p->data;
        p=p->next;
    }while(p!=first);
    cout<<endl;
}
int main(){
    int A[]={1,2,3,4,5};
    create(A,5);
    display(first);

    return 0;
}

