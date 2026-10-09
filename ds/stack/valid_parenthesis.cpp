#include <iostream>
#include <stack>
#include <vector>

using namespace std;

bool isValid(string str)
{
    stack<char> s;

    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];

        if ('(' == ch || '[' == ch || '{' == ch) // opening
        {
            s.push(ch);
        }
        else // closing
        {
            if (s.empty())      //insufficient opening
            {
                return false;
            }

            //match
            if ((s.top() == '(' && ch == ')') ||
                (s.top() == '[' && ch == ']') ||
                (s.top() == '{' && ch == '}'))
            {
                s.pop();
            }
            else
            {
                return false;
            }
        }
    }

    return s.empty();
}

int main()
{
    string str = "([{}])";
    string str2 = "([{}]";

    cout << isValid(str) << endl;
    cout << isValid(str2) << endl;

    return 0;
}