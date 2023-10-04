#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter size : ";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int index;
    cout<<"enter index at which element for where element delete : ";
    cin>>index;

     for(int i=index;i<n;i++){
         swap(arr[i],arr[i+1]);

     }
     n-=1;
     for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
     }


    return 0;
}