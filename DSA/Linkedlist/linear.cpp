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
node * search(node *p,int key){
    node *q=NULL;
    while(p){
        if(key==p->data){
            q->next=p->next;
            p->next=first;
            first=p;
            return p;
        }
        q=p;
        p=p->next;
    }
    return NULL;
}

int main(){
    int A[]={1,2,3,6,5};
    create(A,5);
    display(first);
    cout<<endl;
    node *temp;
    temp=search(first,2);
    if(temp){
        cout<<"Node found "<<temp->data<<endl;
    }
    else{
        cout<<" not found "<<endl;
    }
    display(first);
    
    return 0;
}