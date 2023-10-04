#include<iostream>
#include<stdio.h>
using namespace std;

class node{
    public:
    int data;
    node*next;
}*first=NULL,*second=NULL,*third;

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
void Merge(node*p,node*q){
    node *last;
    if(p->data<q->data){
        third=last=p;
        p=p->next;
        third->next=NULL;
    }
    else{
        third=last=p;
        q=q->next;
        third->next=NULL;
    }
    while(p && q){
        if(p->data<q->data){
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }
        else{
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
    }
    if(p){
        last->next=p;
    }
    if(q){
        last->next=q;
    }
}
void display(node *p){
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main(){

    int A[]={10,20,30,40,50};
    int B[]={15,25,35,45,55};
    create(A,5);
    create2(B,5);
    // display(first);
    // cout<<endl;
    // display(second);
    // cout<<endl;
    Merge(first,second);
    display(third);
    return 0;
}