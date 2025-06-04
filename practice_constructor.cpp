#include<iostream>
using namespace std;

class student{
public:
 //default constructor
   student(){
    cout<<"hello i am default constructor :";
   }
// parameterized constructor
  student(int a,int b){
    cout<<(a+b);
  }
  // parameterized constructor
  student(string name){
    cout<<(name);
  }
};

int main(){
  student s("dhiraj");
  //student s;

  return 0;
}