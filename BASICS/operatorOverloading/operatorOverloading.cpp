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
    // complex add(complex x){
    //     complex temp;                               --------------------|
    //     temp.real=real+x.real;                                          |
    //     temp.img=img+x.img;                                             |
    //     return temp;                                                    |------------------same meaning we replace add into OPERATOR+
     //                                                                    |
    // }                                                                   |
    complex operator+(complex x){                 /*              ---------|                 */
        complex temp;
        temp.real=real+x.real;
        temp.img=img+x.img;
        return temp;

    }
    void display(){
        cout<<real<<" + i"<<img;
    }
};

int main(){
    complex c1(2,3);
    complex c2(3,2);
    complex c3;
    // c3=c1.add(c2);
    c3=c1+c2;
    // cout<<c3;
    c3.display();
    
    return 0;
}