#include<iostream>
using namespace std;
class time
{
    public:
    int h,m;
    time(int x, int y){
        h=x;
        m=y;
    };
    int getminutes(){
        return(h*60+m);

    }
    void display(){
        cout<<h<<m;
    }
};
class minutes
{
    int m;
    public:
    minutes(){
        m=0;
    };
    void operator =(time t1){
        m=t1.getminutes();

    } 
    void display(){
        cout<<m;
    }
    
};

int main(){
    time t(3,17);
    minutes m1 ;
    m1=t;
    t.display();
    
    m1.display();
    return 0;
}