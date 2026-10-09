#include <iostream>
#include <stack>
#include <vector>

using namespace std;

bool isDuplicate(string str)
{
    stack<char> s;

    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        
        if( ch != ')') {    //non-closing
            s.push(ch);
        }
        else {  //closing
            if(s.top() == '(') {
                return true;
            }
            while(s.top() != '(') { //duplicate
                s.pop();
            }
            s.pop();
        }
    }
    return false;
}

int main()
{
    string str = "(((a+b)) + c)"; //invalid: true
    string str2 = "(((a+b) + d) + c)"; //valid: false

    cout << isDuplicate(str) << endl;
    cout << isDuplicate(str2) << endl;


    return 0;
}