#include<iostream>
using namespace std;


int main() {
     int n;
    cin>>n;
    char k=65;
    for(int i=1;i<=n;i++){
        char p=k+n-i;
        for(int j=1;j<=i;j++){
            cout<<p;
            p++;
        }
        cout<<endl;
    }
    
    
}
