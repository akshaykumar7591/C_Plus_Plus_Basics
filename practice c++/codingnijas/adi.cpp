#include<iostream>
using namespace std;

int main(){
     int num;
     cin>>num;
     for(int i=1;i<=num;i++){
         for(int j=1;j<=num;j++){
             int f=i+j;
             if(f%4==0){
                 cout<<"*";
             }
         }
     }
    return 0;
}