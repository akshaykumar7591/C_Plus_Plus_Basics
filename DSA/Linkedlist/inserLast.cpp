#include<iostream>
#include<stdio.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
}*first=NULL;

void insertlast(node *p,int x){
    node *last;
    node *t=new node;
    t->data=x;
    t->next=NULL;
    if(first==NULL){
        first=last=t;
    }
    else{
        while(p){
            p=p->next;
        }
        p=last;
        last->next=t;
        last=t;
    }
}

void display(node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main(){
    insertlast(first,2);
    insertlast(first,3);
    insertlast(first,23);
     insertlast(first,3);
    display(first);
    return 0;
}