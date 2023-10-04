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
void length(node *p){
    int len=0;
    do{
        p++;
        p=p->next;
    }while(p!=first);
    cout<<endl;
}
void insert(node *p,int pos,int x){
    node *t;
    int i;
    if(pos<0 || pos>length(first)){
        return 0;
    }
    if(pos==0){
        t=new node;
        t->data=x;
        if(first==NULL){
            first=t;
            first->next=first;
        }
        else{
            while(p->next!=first){
                p=p->next;
            }
            p->next=t;
            t->next=first;
            first=t;
        }

    }
    else{
        for(int i=0;i<pos-1;i++){
            p=p->next;
        }
        t=new node;
        t->data=x;
        t->next=p->next;
        p->next=t;
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
    insert(first,2,55);
    insert(first,5,66);
    display(first);

    return 0;
}
