#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
         cin>>A[i];
     }
    for(int i=0;i<n;i++){
         cout<<A[i]<<" ";
     }
     cout<<endl;
    int key;
    cout<<"entering key"<<endl;
    cin>>key;
    for(int i=0;i<n;i++){
        if(key==A[i]){
            cout<<"number found at"<<i;
            return 0;
        }
       
    }
     cout<<"-1"<<endl;
    


    return 0;
}