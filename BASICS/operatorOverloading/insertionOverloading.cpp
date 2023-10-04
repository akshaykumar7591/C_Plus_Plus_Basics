#include<iostream>
using namespace std;

class complex{
    private:
    int real;
    int img;
    public:
    complex(int r=0,int i=0){
        real=r;
        img=i;
    }
                                                                   
    
    void display(){
        cout<<real<<" + i"<<img;
        
    }
    friend ostream & operator<<(ostream & out,complex & c1);
    
};
ostream & operator<<(ostream & out,complex & c1){                
        0<<c1.real<<c1.img;
        return out;
    }
int main(){
    complex c1(2,3);
    // cout<<c1;
    operator<<(cout,c1);
    return 0;
}