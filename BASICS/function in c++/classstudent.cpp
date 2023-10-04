// #include <iostream>
// #include<string.h>
// using namespace std;

// class student{
//     private:
//     int roll;
//     string name;
//     int marks1;
//     int marks2;
//     int marks3;
//     public:
//     student(int roll,string n,int m1,int m2,int m3){
//         this-> roll=roll;
//         name=n;
//         marks1=m1;
//         marks2=m2;
//         marks3=m3;
//     }
//     int total(int marks1,int marks2,int marks3){
//         return marks1+marks2+marks3;
//     }
// };

// int main() {
//     int roll,m1,m2,m3;
//     string n;
//     cout<<"enter roll no : ";
//     cin>>roll;
//     cout<<endl;
//     cout<<"enter name is : ";
//     cin>>n;
//     cout<<endl;
//     cout<<endl;
//     cout<<"enter marks of 3 subject is : ";
//     cin>>m1>>m2>>m3;
//     cout<<endl;
//     cout<<"  roll no is : "<<roll<<endl;
//     cout<<"Name is: "<<n<<endl;
//     cout<<"Marks of 3 subject is :  "<<m1<<" "<<m2<<" "<<m3<<endl;
//     student s(roll,n,m1,m2,m3);
//     cout<<"Total marks is : "<<s.total(m1,m2,m3)<<endl;
    

//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int t;
    cout<<"enter test case"<<endl;
    cin>>t;
    
    int n;
    cin>>n;
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        cin>>arr[i];
        
    }
    int arr1[n];
    for( i=0;i<n;i++){
        arr1[i]=arr[i];
        arr[i]=0;
        
    }
    for( i=0;i>n;i++){
        arr[i]=arr1[n-i-1];
        
    }
    for( i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
    // for( i=n-1;i>=0;i--){
    //     cout<<arr[i]<<" ";
        
    // }
 
    
    
	return 0;
}