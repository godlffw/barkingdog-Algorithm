#include <iostream>
#include <string>
#include <list>
#include <vector>

using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    list<int> lst;
    for (int i = 1; i < n+1; i++) {
        lst.push_back(i);
    }
    vector<int> ans;
    auto it = lst.begin();
    while(lst.size()) {
        for (int i = 0; i < k-1; i++) {
            it++;
            if(it == lst.end()) {
                it = lst.begin();
            }
        }
        int tmp = *it;
        ans.push_back(tmp);
        it = lst.erase(it);
        if (it == lst.end() && !lst.empty()) it = lst.begin();
    }
    cout << "<";
    for (int i = 0; i < n-1; i++) {
        cout << ans[i] << ", ";
    }
    cout << ans[n-1] << ">";
}
