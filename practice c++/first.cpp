#include<iostream>
using namespace std;

int main(){
    // int a,b;
    // cout<<"entering value of a ;"<<endl;
    // cin>>a;

    // cout<<"entering value of b"<<endl;
    // cin>>b;
    // int sum=a+b;
    // cout<<"sumof two number is :"<<sum<<endl;

    string name;
    cout<<"may i know your name;"<<endl;
     getline(cin,name); //grtline is used to read full string. Ex Anil kumar
    cout<<"hello! "<<name;
    return 0;
}