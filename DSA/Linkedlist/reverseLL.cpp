#include<iostream>
#include<stdio.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
}*first;



void insert(node *p,int pos,int x){
    node *t;
   t=new node;
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
    while (p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    
}
void reverse(node*p){
    node *q=NULL,*r=NULL;
    while(p){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
}

int main(){

    insert(first,0,22);
    insert(first,1,23);
    insert(first,2,25);
    insert(first,3,26);
    display(first);
    cout<<endl;
    reverse(first);
    display(first);
    return 0;
}