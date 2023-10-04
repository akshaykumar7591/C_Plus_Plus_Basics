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
int sum(node *p){
    int sum=0;
    while(p){
        sum=sum+p->data;
        p=p->next;
    }
    return sum;
}
int main(){
    int A[]={1,2,3,5,6};
    create(A,5);
    display(first);
    cout<<endl;
    cout<<"sum of node is : "<<sum(first);
    return 0;
}