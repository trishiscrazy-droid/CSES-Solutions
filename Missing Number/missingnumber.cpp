#include <iostream>
#include <vector>

int main() {
    size_t n;
    std::cin >> n;

    std::vector<size_t> numbers;
    size_t num;
    bool book[n] {false};
    
    while (std::cin >> num) {
        book[num - 1] = true;
        if (std::cin.peek() == '\n') break;
    }

    for (size_t i = 0; i < n; i++) {
        if (!book[i]) {
            std::cout << std::to_string(i+1) << std::endl;
            break;
        }
        continue;
    }
    return 0;
}