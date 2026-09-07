#include <iostream>
#include <vector>
using namespace std;

int main() {
    uint n, e = 2, o = 1;
    cin >> n;
    if (n == 2 || n == 3) {
        cout << "NO SOLUTION";
        return 0;
    }
    vector<uint> permut;
    while (e <= n) {
        permut.push_back(e);
        e += 2;
    }
    while (o <= n) {
        permut.push_back(o);
        if (o == 1 && n != 1 && (permut.at(permut.size() - 1) - permut.at(permut.size() - 2)) == 1) {
            permut.at(permut.size() - 1) = 3;
            permut.push_back(1);
            o = 5;
            continue;
        }
        o += 2;
    }
    for (uint i = 0; i < n; i++) {
        cout << permut.at(i) << ' ';
    }
    return 0;
}