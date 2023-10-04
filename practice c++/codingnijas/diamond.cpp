#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int even=(n+1)/2;
    int odd=even-1;
    for(int i=1;i<=even;i++){
        for(int j=1;j<n-i-1;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        for(int k=2;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=odd;i>=1;i--){
        for(int j=1;j<n-i-1;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        for(int k=2;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }

  
}
