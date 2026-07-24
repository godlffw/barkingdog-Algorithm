#include <bits/stdc++.h>


int main() {
    std::vector<int> arr(26);
    std::vector<char> alphabet= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    
    std::string str;
    std::cin >> str;
    for (char c : str) {
        int num = std::find(alphabet.begin(), alphabet.end(), c) - alphabet.begin();
        arr[num]++;
    }

    for (const auto& n : arr) {
        std::cout << n << " ";
    }

}
