#include<iostream>
#include<stdio.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

}*first=NULL;

void create(int A[],int n){
    int i;
    Node *t,*last;
    first=new Node;
    first -> data=A[0];
    first ->next=NULL;
    last=first;


    for(i=1;i<n;i++){
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
   

void display(Node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}

// ------------------Display with recurssion method----------
void Rdisplay(Node *p){
    if(p!=NULL){
        cout<<p->data<<" ";
        Rdisplay(p->next);
    }

}



int main(){
    int A[]={1,2,3,5,6};
    create(A,5);
    display(first);
    cout<<endl;
    Rdisplay(first);
    return 0;
}