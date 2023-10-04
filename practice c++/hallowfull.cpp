#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            if(j==1||i==n){
                cout<<"* ";
            }
            // else if (j>=3){
            //     cout<<" ";
                
            // }
            // else{
            //     cout<<"* ";
            // }
        }
        int strt=n;
        for(int k=strt;k<=n;k++){
            cout<<"*";
        }
        for(int k=1;k<=i;k++){

            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}