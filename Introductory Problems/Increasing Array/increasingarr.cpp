#include <iostream>
#include <vector>
#include <cstdint>

int main() {

    uint64_t moves = 0;
    uint32_t n, l = 0, r = 1;
    int64_t num;
    std::vector<int64_t> numbers;

    std::cin >> n;

    while (std::cin >> num) {
        numbers.push_back(num);
        if (std::cin.peek() == '\n') {
            break;
        }
    }

    while(true) {
        if (r == numbers.size()) {
            break;
        }
        if (numbers[l] > numbers[r]) {
            moves += numbers[l] - numbers[r];
            numbers[r] = numbers[l];
        }
        l = r++;
    }

    std::cout << std::to_string(moves);

    return 0;
}