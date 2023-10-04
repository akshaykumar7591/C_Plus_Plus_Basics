#include <iostream>
using namespace std;

class time {
    public:
    int h , m;
    void display(){
        cout<<h;
        cout<<m;
    }
    void operator=(int a){
        h=a/60;
        m=a%60;
        
    }
};
int main(){

    int a;
    cout<<"enter the value of ";
    cin>>a;
    time t1;
    t1=a;
    t1.display();
}