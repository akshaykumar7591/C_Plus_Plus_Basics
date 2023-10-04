#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n;"<<endl;
    cin>>n;+
    int i;
    int sum_of_even=0;
    int sum_of_odd=0;

    for(i=n;i>=0;i=i/10){
        i=i%10;
        if(i%2==0){
            sum_of_even+=i;

        }
        else{
            sum_of_odd+=i;
        }
       
       
       
    }
    
    cout<<sum_of_even<<endl;
    cout<<sum_of_odd<<endl;
    return 0;
}