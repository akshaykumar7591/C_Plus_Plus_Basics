#include <iostream>
using namespace std;
#include<string.h>


int main() {
    string str;
    getline(cin,str);
    
    string ::iterator it;
    for(it=str.begin();it!=str.end();it++){
        cout<<*it;
        }
    
    
    

    return 0;
}