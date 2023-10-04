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
    friend complex operator+(complex x,complex y);
    
};
complex operator+(complex x,complex y){                
        complex temp;
        temp.real=x.real+y.real;
        temp.img=x.img+y.img;
        return temp;

    }
int main(){
    complex c1(2,3);
    complex c2(3,2);
    complex c3;
    c3=c1+c2;
    
    c3.display();
    return 0;
}