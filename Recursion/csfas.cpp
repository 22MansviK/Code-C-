#include<iostream>
#include <vector>
#include <string>
#include <bitset>
using namespace std;

int countStrings(const vector<string>& S, bitset<10> bitmask) {
    int count = 0;
    for (const string& str : S) {
        bool possible = true;
        for (char ch : str) {
            if (!bitmask[ch - 'a']) {
                possible = false;
                break;
            }
        }
        if (possible) {
            count++;
        }
    }
    return count;
}

int solution(const vector<string>& S, int K) {
    int maxCount = 0;
    for (int mask = 0; mask < (1 << 10); ++mask) {
        bitset<10> bitmask(mask);
        if (bitmask.count() <= K) {
            int count = countStrings(S, bitmask);
            maxCount = max(maxCount, count);
        }
    }
    return maxCount;
}

// Test cases
int main() {
    vector<string> example1 = {"Fabc", "abb", "cb", "a", "bbb"};
    int K1 = 2;
    // Output: 3
    cout << solution(example1, K1) << endl;

    vector<string> example2 = {"adr", "jibh", "jcgi", "eij", "adf"};
    int K2 = 3;
    // Output: 2
    cout << solution(example2, K2) << endl;

    vector<string> example3 = {"Fabed", "efgh"};
    int K3 = 3;
    // Output: 0
    cout << solution(example3, K3) << endl;

    vector<string> example4 = {"bc", "edf", "fde", "dge", "abed"};
    int K4 = 4;
    // Output: 3
    cout << solution(example4, K4) << endl;

    return 0;
}