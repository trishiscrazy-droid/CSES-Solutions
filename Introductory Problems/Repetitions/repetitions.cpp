#include <iostream>

//goal: find length of longest substring with non repeating characters.
int lenstrsubsw(std::string& str) {
    if (str.length() < 2) return str.length();
    
    int left = 0, right = 0, res = 0;
    bool book[4] {0};

    std::map<std::strong, int> charindex = {
        {'A', 0},
        {'T', 1},
        {'G', 2},
        {'C', 4},
    }
    
    while (right < str.length()) {
        while(book[charindex.at(str[right])]) {
            book[charindex.at(str[left])] = 0;
        }
    }
}

int main() {

    std::string str;
    std::cin >> str;

    return 0;
}