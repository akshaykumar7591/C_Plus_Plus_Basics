#include <iostream>
using namespace std;
#include<string.h>


int main() {
    string str;
    getline(cin,str);
    
    string ::reverse_iterator it;
    for(it=str.rbegin();it!=str.rend();it++){
        cout<<*it;
        }
    
    
    

    return 0;
}