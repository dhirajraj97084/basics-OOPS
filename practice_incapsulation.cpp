#include<iostream>
using namespace std;

class student {
  private:
    string password;

  public:
    string name;
    string email;

    void setPassword(string pass) {
        password = pass;
    }

    string getPassword() {
        return password;
    }
};

int main() {
    student s;
    s.name = "dhiraj";
    s.email = "dhiraj@gmail.com";
    s.setPassword("dhiraj123");

    cout << "Name is: " << s.name << endl;
    cout << "Email is: " << s.email << endl;
    cout << "Password is: " << s.getPassword() << endl;

    return 0;
}
