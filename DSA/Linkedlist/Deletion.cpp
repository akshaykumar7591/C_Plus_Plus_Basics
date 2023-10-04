#include<iostream>
#include<stdio.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
}*first;

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
        cout<<p->data;
         p=p->next;
    }
    return c;
}
int delete1(node *p,int pos){
    node *q=NULL;
    int x=-1,i;
    if(pos<1 ||pos>count(p)){
        return -1;
    }
    if(pos==1){
        x=p->data;
        q=first;
        first=first->next;
        delete q;
        return x;
    }
    else{
        p=first;
        q=NULL;
        for(i=0;i<pos-1;i++){
            q=p;
            p=p->next;
        }
        if(p){
            q->next=p->next;
            // x=p->next;
            delete p;
            return x;
        }
    }

    return x;
}
int main(){
    int A[]={1,2,3,4,5};
    create(A,5);
    display(first);
    cout<<endl;
    delete1(first,1);
    display(first);
    return 0;
}