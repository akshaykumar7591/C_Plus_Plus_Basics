#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n;"<<endl;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        int count=i;
        for(int j=1;j<=i;j++){
            cout<<count;
            count+=1;
            
        }
        // count-=1;
        cout<<endl;
    }
    return 0;
}