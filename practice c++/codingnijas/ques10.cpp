#include<iostream>
using namespace std;

int main(){
    string n;
    cin>>n;
    int sum_of_alpha=1;
    int sum_of_digit=1;
    int sum_of_WSpace=1;
    for(int i=0;i<=(n.length());i++){
        if(n[i]==char(i>=97 && i<=122)){
            cout<<sum_of_alpha;
            sum_of_alpha++;
        }
        else if(n[i]>=0 && n[i]<=9){
            cout<<sum_of_digit;
            sum_of_digit++;
        }
        else{
           cout<< sum_of_WSpace ;
           sum_of_WSpace++;
        }
    }
    return 0;
}