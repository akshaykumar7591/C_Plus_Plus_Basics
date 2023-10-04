#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
   
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
         int count=i;
        for(int k=1;k<=i;k++){
            cout<<count;
            count++;
        }
         int add=2*i-2;
        for(int k=2;k<=i;k++){
            cout<< add;
            add--;
            
        }
        
        cout<<endl;
    }
    
    
}
