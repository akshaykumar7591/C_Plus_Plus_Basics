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
    rectangle s;
    s.length=10;
    s.breath=20;
    cout<<s.area();
    
    return 0;
}