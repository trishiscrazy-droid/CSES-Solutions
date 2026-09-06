#include <bits/stdc++.h>
using namespace std;

int main() {
    uint32_t n;
    cin >> n;
    uint64_t num;
    set<uint64_t> numbers;
    while (cin >> num) {
        numbers.insert(num);
        if (cin.peek() == '\n') {
            break;
        }
    }
    cout << numbers.size();
    return 0;
}