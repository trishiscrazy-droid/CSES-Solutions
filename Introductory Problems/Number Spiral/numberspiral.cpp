#include <iostream>
#include <vector>
#include <cstdint>
using namespace std;

int main() {
    uint32_t t;
    uint64_t num, y, x;
    cin >> t;
    vector<uint64_t> res;
    while (t--) {
        cin >> y >> x;
        //building the spiral
        if (max(x,y) == x) {
            if (x & 1) {
                num = x*x;
                while (y-- != 1) {
                    num--;
                }
            } else {
                num = (x-1)*(x-1) + 1;
                while (y-- != 1) {
                    num++;
                }
            }
        } else {
            if (y & 1) {
                num = (y-1)*(y-1) + 1;
                while (x-- != 1) {
                    num++;
                }
            } else {
                num = y*y;
                while (x-- != 1) {
                    num--;
                }
            }
        }
        res.push_back(num);
    }
    for(int i = 0; i < res.size(); i++) {
        cout << to_string(res[i]) << endl;
    }
    return 0;
}