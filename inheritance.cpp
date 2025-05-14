#include<iostream>
using namespace std;

class teacher{
 public:
   string name;
   int age;
   string email;
};

class student:public teacher{
  public:
   string password;
   void getTinfo(){
    cout<<"Enter the Student name:";
    getline(cin,name);
    cout<<"Enter the Student email:";
    getline(cin,email);
    cout<<"Enter the Student age:";
    cin>>age;
    cout<<"Enter the Student password:";
    cin>>password;
   }

   void showInfo(){
    cout<<"name :"<<name<<endl;
    cout<<"email :"<<email<<endl;
    cout<<"password :"<<password<<endl;
    cout<<"age :"<<age<<endl;

   }
};


int main(){
    student s;
    s.getTinfo();
    s.showInfo();
    return 0;
}