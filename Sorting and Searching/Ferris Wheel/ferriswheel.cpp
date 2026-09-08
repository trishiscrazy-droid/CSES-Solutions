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
    for (uint i = 0; i < nc - 1; i++) {
        if (weight[i] + weight[i+1] <= mxw) {
            ng--;
            i++;
        }
    }    
    cout << to_string(ng);
    return 0;
}