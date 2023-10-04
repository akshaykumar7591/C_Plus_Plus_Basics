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
    int l=A[0];
    int h=A[n-1];
    int mid;
    while(l<=h){
        mid=(l+h)/2;
        if(key==A[mid]){
            cout<<"found at "<<mid;
            return 0;
        }
        else if(key<A[mid]){
            h=mid-1;
        }
        else{
            l=mid+1;
        }

    }
    cout<<"not found";


    return 0;
}