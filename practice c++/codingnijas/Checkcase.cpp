#include<iostream>
using namespace std;

int main() {
	char n;
    cin>>n;
    
    if(n>=65 && n<=90){
        cout<<"1"<<endl;
        
    }
    else if(n>=97 && n<=122){
        cout<<"0"<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
	
}
