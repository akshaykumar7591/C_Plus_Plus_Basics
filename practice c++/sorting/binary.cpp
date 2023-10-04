#include<iostream>
using namespace std;

void found(int arr[],int n){
    int low=0,high=n-1,mid;
    int k;
    cout<<"enter the which find : ";
    cin>>k;
    while(low<=high){

       int mid=(low+high)/2;
       if(arr[mid]==k){
           cout<<"found at index "<<mid;
            return;
       }
       else if(arr[mid]<k){
           low=mid+1;
       }
       else{
           high=mid-1;
       }
    }
    
        cout<<"not found"<<endl;
    


}

int main(){
    int n;
    cout<<"emtering size : ";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    found(arr,n);

    
    
    return 0;
}