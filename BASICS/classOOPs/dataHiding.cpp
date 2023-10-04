#include<iostream>
using namespace std;

class rectangle{
    private:
    int length;
    int breath;
   
   public:
   void setLength(int l){
    if(l>=0){
        length=l;
    }
    else{
        length=0;
        }
   }

   void setBreath(int b){
    if(b>=0){
        breath=b;
    }
    else{
        breath=0;
        }
   }
   int getlength(){
    return length;
   }
   int getbreath(){
    return breath;
   }
    
    int area()
    {
        return length*breath;

    }

    
};
int main(){
    rectangle r;
    r.setLength(10);
    r.setBreath(20);
    cout<<r.area()<<endl;
    cout<<r.getlength();

    return 0;
}