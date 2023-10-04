#include<iostream>
#include<stdio.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
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
void display(node *p){
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
}
int count(node *p){
    int c=0;
    while(p){
        c++;
        p=p->next;
    }
    return c;
}

void insert(node *p,int index,int x){
    node *t;
    if(index<0 || index>count(p)){
        return ;
    }
    t=new node;
    t->data=x;
    if(index==0){
        t->next=first;
        first=t;
    }
    else{
        for(int i=0;i<index-1;i++){
            p=p->next;
        }
        t->next=p->next;
        p->next=t;

    }

}
int main(){
    // int A[]={1,2,3,4,5};
    // create(A,5);
    // display(first);
    // cout<<endl;
    insert(first,0,33);
    insert(first,1,36);
    insert(first,2,35);
    insert(first,5,10);
    display(first);

    return 0;
}