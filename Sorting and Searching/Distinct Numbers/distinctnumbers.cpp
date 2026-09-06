#include <iostream>
#include <cstdint>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<uint64_t> countednum, numbers;
    uint32_t n, res = 1;
    uint64_t num;
    cin >> n;
    while (cin >> num) {
        numbers.push_back(num);
        if (cin.peek() == '\n') {
            break;
        }
    }
    sort(numbers.begin(), numbers.end(), [](uint64_t x, uint64_t y) 
    {
        return x < y;
    });
    for (uint32_t i = 1; i < numbers.size(); i++) {
        if (numbers[i] != numbers[i-1]) {
            ++res;
        }
    }
    cout << to_string(res);
    return 0;
}