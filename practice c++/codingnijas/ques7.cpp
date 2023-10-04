#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    char k=65;
    for(int i=1;i<=n;i++){
        char p=k+i-1;
        for(int j=1;j<=n;j++){
        
            cout<<char(p+j-1);
            

        }
        // k++;
        cout<<endl;
    }

      
  
}