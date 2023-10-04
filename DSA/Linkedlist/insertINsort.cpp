#include<iostream>
#include<stdio.h>
using namespace std;

 class node{
    public:
    int data ;
    node * next;
 }*first=NULL;

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

void sortinsert(node *p,int x){
    node *t,*q=NULL;
    t=new node;
    t->data=x;
    t->next=NULL;
    if(first==NULL){
        first==t;
    }
    else{
        while(p && p->data<x){
            q=p;
            p=p->next;
        }
        if(p==first){
            t->next=first;
            first=t;
        }
        else{
            t->next=q->next;
            q->next=t;
        }
    }
}
void display(node *p){
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
}

int main(){
    int A[]={1,2,4,7,9};
    create(A,5);
    display(first);
    cout<<endl;
    sortinsert(first,3);
    display(first);
    return 0;
}