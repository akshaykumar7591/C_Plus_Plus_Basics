#include<iostream>
#include<stdio.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
}*first;

void insert(node *p,int pos ,int x){
    node *t=new node;
    t->data=x;
    // if(pos<0 ){
    //     return ;
    // }
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
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
}
int isSort(node *p){
    int x=-65536;
    while(p){
        if(p->data<x){
            return 0;

        }
        x=p->data;
        p=p->next;
    }
    return 1;
}
int main(){
    insert(first,0,3);
    insert(first,1,6);
    insert(first,2,2);
    insert(first,3,55);
    display(first);
    cout<<endl;
    if(isSort(first)){
        cout<<"ll is sorted"<<endl;
    }
    else{
        cout<<" not sorted";
    }

    return 0;
}