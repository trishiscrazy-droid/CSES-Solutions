#include <iostream>
#include <cstdint>
#include <algorithm>
using namespace std;

int main() {
    string str, res = "", sidestr = "", midstr = "";
    cin >> str;
    uint32_t book[26] {0};
    uint64_t count = 0;

    for (uint32_t i = 0; i < str.length(); i++) {
        book[str[i] - 'A']++;
    }
    for (uint32_t i = 0; i < 26; i++) {
        if (book[i] & 1) {
            count++;
        }
        if (count > 1) {
            cout << "NO SOLUTION";
            return 0;
        }
    }
    for (uint32_t i = 0; i < 26; i++) {
        if (!(book[i] & 1)) {
            sidestr.append(book[i]/2, 'A' + i);
        } else {
            midstr.append(book[i], 'A' + i);
        }
        res = sidestr + midstr;
        reverse(sidestr.begin(), sidestr.end());
        res += sidestr;
    }
    cout << res;
    return 0;
}