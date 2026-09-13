#include <iostream>
using namespace std;

int main() {
    long long n, res = 1;
    cin >> n;
    long long mod = 1000000007;

    while (n--) {
        res *= 2;
        if (res > mod) {
            res = res % mod;
        }
    }
    cout << to_string(res);
    return 0;
}