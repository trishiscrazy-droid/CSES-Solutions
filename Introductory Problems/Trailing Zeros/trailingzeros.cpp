#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    unsigned long n, exp2 = 0, exp5 = 0; // exp for exponent
    cin >> n;
    unsigned long m = n;
    for (uint i = 1; n/2; i++) {
        n /= 2;
        exp2 += n;
    }
    for (uint i = 1; m/5; i++) {
        m /= 5;
        exp5 += m;
    }
    cout << to_string(min(exp2, exp5));
    return 0;
}