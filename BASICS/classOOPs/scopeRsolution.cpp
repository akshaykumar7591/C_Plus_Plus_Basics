#include<iostream>
using namespace std;

class rectangle{
    public:
    int length;
    int breath;

    
    int area()
    {
        return length*breath;

    }
   inline int perimter(); /*------------------------inline function--------------------using inline word-----------*/
    
};
int rectangle ::perimter(){
    return 2*(length+breath);
}

int main(){
    rectangle r;
    r.length=10;
    r.breath=30;
    cout<<r.area()<<endl;
    cout<<r.perimter();
    return 0;
}