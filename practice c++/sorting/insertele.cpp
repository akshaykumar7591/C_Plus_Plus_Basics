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
    int index,element;
    cout<<"enter index at which element insert : ";
    cin>>index;

    cout<<"emter element : ";
    cin>>element;
     for(int i=n-1;i>=index;i--){
         arr[i+1]=arr[i];

     }
     arr[index]=element;
     n+=1;
     for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
     }
    return 0;
}