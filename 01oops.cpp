#include<iostream>
using namespace std;

//create a class
class Teacher{


public:                                 //properties/attribute
  string name;
  double slary;
  int age;

  
  void show(int a,int b){                //method inside the class
      cout<<" sum of two number is :"<<(a+b)<<endl;
  }
  void print(){
    cout<<"how are you bhai ?"<<endl;
  }
};

//main class
int main(){
  Teacher obj;
  obj.name="Dhiraj kumar tiwari";
  cout<<obj.name<<endl;
  obj.show(10,30);
  obj.print();
  return 0;
}
