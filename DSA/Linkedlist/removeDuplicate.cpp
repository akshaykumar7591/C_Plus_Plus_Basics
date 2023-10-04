#include<iostream>
#include<stdio.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
}*first;

void insert( node *p,int pos,int x){
    node *t=new node;
    t->data=x;
    if(pos==0){
        t->next=first;
        first=t;
    }
    else{
        for(int i=0;i<pos-1;i++){
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }
}
void display(node *p){
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
}
void removed1(node *p){
    node *q=p->next;
    while(q!=NULL){
        if(p->data!=q->data){
            q=p;
            q=q->next;
        }
        else{
            p->next=q->next;
            delete q;
            q=p->next;

        }
    }
}

int main(){
    insert(first,0,3);
    insert(first,1,6);
    insert(first,2,6);
    insert(first,3,16);
    insert(first,4,23);
    display(first);
    cout<<endl;
    removed1(first);
    display(first);
    return 0;
}