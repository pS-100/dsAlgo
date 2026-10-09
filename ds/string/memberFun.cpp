#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "priyanshu";

    cout << str.length() << "\n";
    cout << str[3] << "\n";
    cout << str.at(3) << "\n";
    cout << str.substr(1, 4) << endl;
    
    string str2 = "i love cpp && cpp";
    cout << str2.find("cpp") << endl; //it retrun 1st occurance n if word not present than it return -1 
    cout << str2.find("cpp", 9) << endl; // for 2nd occurance with limit of find after that

    string str3 = "cat";
    string str4 = "dat";

    cout << (str3 > str4);
}