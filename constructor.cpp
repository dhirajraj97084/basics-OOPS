#include<iostream>
using namespace std;
//create a class
class login{ 
public:   
   login(){
    cout<<"hello i am first constructor"<<endl;
   }
   login(int a,int b){
    cout<<"sum of two number is:"<<(a+b)<<endl;
   }
};
// create main class
int main(){
    login obj1(34,56);  
    login obj2();   
    return 0;
}