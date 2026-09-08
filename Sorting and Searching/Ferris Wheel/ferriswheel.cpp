#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    uint nc, mxw, ng, inputw;
    cin >> nc >> mxw;
    ng = nc;
    vector<uint> weight;
    while (cin >> inputw) {
        weight.push_back(inputw);
        if (cin.peek() == '\n') {
            break;
        }
    }
    sort(weight.begin(), weight.end());
    uint l = 0, r = nc - 1;
    while (l < r) {
        if (weight[l] + weight[r] <= mxw) {
            ng--;
            l++;
        }
        r--;
    }    
    cout << to_string(ng);
    return 0;
}