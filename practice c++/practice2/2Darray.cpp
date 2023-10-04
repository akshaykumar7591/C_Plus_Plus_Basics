// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    
    int arr[n][m];
    cout<<"hello"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"hello2"<<endl;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}