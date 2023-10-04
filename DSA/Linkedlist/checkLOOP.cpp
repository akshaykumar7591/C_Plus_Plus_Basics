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
int isloop(node *f){
    node *p,*q;
    p=q=f;
    do{
        p=p->next;
        q=q->next;
        if(q){
            q=q->next;
        }
    }while (p && q && p!=q);

    if(p==q){
        return 1;
    }
    else{
        return 0;
    }
    
    
}

void display(node *p){
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main(){
    node *t1,*t2;
    int A[]={1,2,3,4,5,6};
    create(A,6);
    display(first);
    cout<<endl;
    t1=first->next->next;
    t2=first->next->next->next->next->next;
    t2->next=t1;
    cout<< isloop(first);
    

    return 0;
}