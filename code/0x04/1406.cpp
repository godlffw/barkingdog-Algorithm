#include <iostream>
#include <string>
#include <list>

using namespace std;

int main() {
    string word;
    cin >> word;
    list<char> lst;

    for (char c : word) {
        lst.push_back(c);
    }
    auto it = lst.end();
    int num;
    cin >> num;
    cin.ignore();
    for (int i = 0; i < num; i++) {
        string cmd;
        getline(cin, cmd);
        if (cmd[0] == 'P') {
            it = lst.insert(it, cmd[2]);
        }
        else if (cmd[0] == 'L') {
            if (it != lst.begin()) --it;
        }
        else if (cmd[0] == 'D') {
            if (it != lst.end()) ++it;
        }
        else if (cmd[0] == 'B') {
            if (it != lst.begin()) {
                auto tmp = it;
                tmp--;
                it = lst.erase(tmp);
            }
        }
    }

    for (char c : lst) {
        cout << c;
    }
    
}
