#include<iostream>
using namespace std;
void selectSort(int arr[],int n){
    int i,j,k;
    for(int i=0;i<n-1;i++){
        for(int j=k=i;j<n;j++){
            if(arr[k]>arr[j]){
            k=j;
            }
            swap(arr[i],arr[k]);
        }
    }
}

int main(){
    int n;
    cout<<"enter size : ";
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}