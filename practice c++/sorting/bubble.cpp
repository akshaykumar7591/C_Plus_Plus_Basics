#include<iostream>
using namespace std;
void BubbleSort(int arr[],int n){ 
    int flag;
    for(int i=0;i<n-1;i++){
         flag=1;
        for(int j=0;j<n-i-1;j++){

            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=0;
            }
        }
        if(flag){
            return;
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

    BubbleSort(arr,n);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}