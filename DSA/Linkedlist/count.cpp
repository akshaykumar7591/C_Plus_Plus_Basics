#include<iostream>
#include<stdio.h>
using namespace std;

class node{
    public:
    int data;
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

int main(){
    int A[]={1,2,5,3,6};
    create(A,5);
    display(first);
    cout<<endl;
    cout<<"number of Node is : "<<count(first);
    return 0;
}