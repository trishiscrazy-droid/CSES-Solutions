#include <iostream>
#include <vector>

std::vector<size_t> weirdalgo(size_t n) {
    std::vector<size_t> sequence {n};
    while (true) {
        if (n == 1) return sequence;
        if (n & 1) {
                n = 3*n + 1;
            } else {
                n /= 2;
            }
        sequence.push_back(n);
    }
}
    
int main() {
 
    size_t input;
    std::cin >> input;

    for (const auto &element : weirdalgo(input)) {
        std::cout << element << " ";
    }

    return 0;
}
