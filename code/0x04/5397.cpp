#include <iostream>
#include <string>
#include <list>

using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--) {
        string cmd;
        cin >> cmd;
        list<char> lst;
        auto it = lst.end();
        for (char c : cmd) {
            if (c == '<') {
                if (it != lst.begin()) --it;  
            }
            else if (c == '>') {
                if (it != lst.end()) ++it;
            }
            else if (c == '-') {
                if (it != lst.begin()) {
                    auto temp = it;
                    temp--;
                    lst.erase(temp);
                }
            }
            else {
                lst.insert(it, c);
            }
        }
        for (char n : lst) {
            cout << n;
        }
        cout << "\n";
    }
}
