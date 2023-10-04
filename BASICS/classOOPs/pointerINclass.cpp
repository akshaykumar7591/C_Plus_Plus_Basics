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
};

int main(){
    rectangle r;
    rectangle *p;
    p=&r;
    p ->length=10;
    p ->breath=20;
    cout<<p->area();
    return 0;
}