#include<iostream>
using namespace std;


class rectangle{
    private:
    int length;
    int breadth;
    public:
    // NON parmerterized constructurs-------------------------------
    // rectangle(){
    //     length=0;
    //     breadth=0;
    // }
    // parmerterized constructurs-------------------------------
    rectangle(int l,int b){
        length=l;
        breadth=b;
    }
    // copy constructur---------------------
    rectangle(rectangle(&temp)){
        length=temp.length;
        breadth=temp.breadth;
    }
    int area(){
        return length*breadth;
    }
};



int main(){
    // rectangle r;

    // rectangle r();

    rectangle r(100,20);

    rectangle r2(r);

    cout<<r2.area()<<endl;
  
    
    return 0;
}