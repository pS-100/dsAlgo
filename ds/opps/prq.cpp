#include<iostream>
#include<string>

using namespace std;

class User {
    int id;
    string password;

public: 
    string username;

    User(int id) {
        this->id = id;
    }

    void setPassword(string password) {
        this->password = password;
    }

    string getPassword() {
        return password;
    }


};

int main() {
    User u1(1234);
    u1.username = "jhon"; 
    u1.setPassword("qwert");

    cout<< "userName: " << u1.username << endl;
    cout<< "userPassword: " << u1.getPassword() << endl;

    return 0;
}