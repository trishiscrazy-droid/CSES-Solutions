#include <iostream>
#include <cstdint>
using namespace std;

int main() {
    string str;
    cin >> str;

    uint64_t count = 1, res = 1;
    for (uint64_t i = 1; str[i]; i++) {
        if (str[i] == str[i - 1]) {
            count++;
        } else {
            count = 1;
        }
        res = max(res, count);
    }
    cout << to_string(res);
    return 0;
}