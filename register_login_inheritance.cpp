#include<iostream>
using namespace std;

//base class user
class user{
 protected:
   string username;
   string password;
 public:
   void registraction(string uname,string pass){
     username=uname;
     password=pass;
     cout<<"user registraction successfully"<<endl;
   }
   bool validate(string uname,string pass){
    return (username==uname && password==pass);
   }

};

//drived class login
class login:public user{
  public:
   void userlogin(){
    string uname, pass;
      cout<<"entr name :";
      cin>>uname;
      cout<<"entr password :";
      cin>>pass;
      if(validate(uname,pass)){
        cout<<"login successfully "<<endl;
      }else{
        cout<<"login fail !, invalid credentials."<<endl;
      }
   };
};

//main class
int main(){
    login user1;

    string uname,pass;
    cout<<"enter the user name:";
    cin>>uname;
    cout<<"enter the password:";
    cin>>pass;
     
    user1.registraction(uname,pass);
    user1.userlogin();
    return 0;
}