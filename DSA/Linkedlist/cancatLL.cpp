#include<iostream>
#include<stdio.h>
using namespace std;

class node{
    public:
    int data;
    node*next;
}*first=NULL ,*second=NULL,*third;

void create(int A[],int n){
    int i;
    node *t,*last;
    first=new node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(int i=1;i<n;i++){
        t=new node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }


}

void create2(int A[],int n){
    int i;
    node *t,*last;
    second=new node;
    second->data=A[0];
    second->next=NULL;
    last=second;

    for(int i=1;i<n;i++){
        t=new node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }


}
void display(node *p){
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
}
void concat(node *p,node *q){
    third=p;
    while (p->next)
    {
        p=p->next;
    }
    p->next=q;
    
}

int main(){
    int A[]={1,2,3,4,5};
    int B[]={6,7,8,9,10};
    create(A,5);
    display(first);
    cout<<endl;
    create2(B,5);
    display(second);
    cout<<endl;
    concat(first,second);
    display(third);

    return 0;
}