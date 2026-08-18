#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    string str;
    while(1) {
        getline(cin, str);
        if (str == ".") break;
        stack<char> stk;
        bool good = true;
        for (char c : str) {
            if (c == '(' || c == '[') stk.push(c);
            if (c== ')' || c == ']') {
                if (stk.empty()) {
                    good = false;
                    break;
                }
                else if ((c==')' && stk.top()=='(') || (c==']' && stk.top()=='[')) {
                    stk.pop();
                }
                else {
                    good = false;
                    break;
                }
            } 
        }
        if (!stk.empty()) good = false;

        if (good) cout << "yes\n";
        else {cout << "no\n";}
    }
}
