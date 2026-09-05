#include <iostream>

//goal: find length of longest substring with non repeating characters.
int lenstrsubsw(std::string& str) {
    if (str.length() < 2) return str.length();

    int left = 0, right = 0, res = 0;
    bool book[26] {0};

    while(right < str.length()) {
        while(book[str[right] - 'a']) {
            book[str[left++] - 'a'] = 0;
        }
        book[str[right++] - 'a'] = 1;
        res = std::max(res, right - left);
    }    
    return res;
}

int main() {
    std::string str = "helloworld";
    std::cout << std::to_string(lenstrsubsw(str)) << std::endl;

    return 0;
}