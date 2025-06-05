#include<iostream>
using namespace std;

class student{
  public:
  void show(int a){
    cout<<"Integer:"<<a<<endl;    
  }
  void show(string s){
    cout<<"String :"<<s<<endl;
  }
};

int main(){
    student obj;
    obj.show("dhiraj");
    obj.show(456);
    return 0;
}