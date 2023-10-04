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
int max(node *p){
    int m=-65536;
    while(p){
        if(p->data>m){
            m=p->data;
            p=p->next;
        }
    }
    return m;


}
// int min(node *p){
//     int m=INT64_MAX;
//     while(p){
//         if(p->data<m){
//             m=p->data;
//             p=p->next;
//         }
//     }
//     return m;


// }


int main(){
    int A[]={1,6,96,3,5};
    create(A,5);
    display(first);
    cout<<endl;
    cout<<"max numner is : "<<max(first)<<endl;
    // cout<<"max numner is : "<<min(first)<<endl;
    return 0;
}