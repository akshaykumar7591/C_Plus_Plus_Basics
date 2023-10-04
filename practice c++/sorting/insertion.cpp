#include<iostream>
using namespace std;
void insertionSort(int arr[],int n){
    int j,x;
    for(int i=1;i<n;i++){
        j=i-1;
        x=arr[i];
        while(arr[j]>x && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=x;
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

    insertionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}