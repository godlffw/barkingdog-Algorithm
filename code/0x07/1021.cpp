#include <iostream>
#include <deque>

using namespace std;

int main() {
    int size, n;
    cin >> size >> n;
    deque<int> deq;
    for (int i = 1; i <= size; i++) {
        deq.push_back(i);
    }
    int cnt = 0;
    while(n--) {
        int t;
        cin >> t;
        deque<int> right = deq;
        int rightc = 0;
        deque<int> left = deq;
        int leftc = 0;
        while(t != right.front()) {
            int tmp = right.front();
            right.pop_front();
            right.push_back(tmp);
            rightc++;
        }
        while(t != left.front()) {
            int tmp = left.back();
            left.pop_back();
            left.push_front(tmp);
            leftc++;
        }
        if (rightc >= leftc) {
            cnt += leftc;
            deq = left;
        }
        else {
            cnt += rightc;
            deq = right;
        }
        deq.pop_front();
    }
    cout << cnt;
}
