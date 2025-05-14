#include<iostream>
using namespace std;

class Student{
    private:
     string email;
     string password;
    public:
       string name;
       int age;
       double salary;
    void takeInput(){
        cout<<"enter valid email"<<endl;
        cin>>email;
        cout<<"enter the password"<<endl;
        cin>>password;
        cout<<"enter the name"<<endl;
        cin>>name;
        cout<<"enter the age"<<endl;
        cin>>age;
        cout<<"enter the salary"<<endl;
        cin>>salary;
    }
    void showData(){
        cout<<endl<<endl;
        cout<<"my output is : "<<endl;
        cout<<endl<<endl;
        cout<<"email is : "<<email<<endl;
        cout<<"password is : "<<password<<endl;
        cout<<"name is : "<<name<<endl;
        cout<<"age is : "<<age<<endl;
        cout<<"salary is : "<<salary<<endl;
    }
};
int main(){
    Student obj;
    obj.takeInput();
    obj.showData();
    return 0;

}