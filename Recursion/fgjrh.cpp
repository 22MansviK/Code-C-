#include <vector>
#include <string>
#include <unordered_map>
#include <iostream>

using namespace std;

int countBits(int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int solution(vector<string> &S, int K) {
    const int alphabetSize = 26;
    int maxStrings = 0;

    for (int mask = 0; mask < (1 << alphabetSize); mask++) {
        if (countBits(mask) == K) {
            int stringsBuilt = 0;
            unordered_map<char, bool> letterMap;

            for (char c = 'a'; c <= 'z'; c++) {
                if (mask & (1 << (c - 'a'))) {
                    letterMap[c] = true;
                }
            }

            for (const string& s : S) {
                bool canBuild = true;
                for (char c : s) {
                    if (c != '*' && letterMap.find(c) == letterMap.end()) {
                        canBuild = false;
                        break;
                    }
                }
                if (canBuild) {
                    stringsBuilt++;
                }
            }

            maxStrings = max(maxStrings, stringsBuilt);
        }
    }

    return maxStrings;
}

int main() {
    vector<string> S1 = {"abc*", "abb", "cb", "a", "bbb'1"};
    int K1 = 2;
    cout << solution(S1, K1) << endl;  // Output: 3

    vector<string> S2 = {"adr", "libh", "jegi\"", "eij", "*adri"};
    int K2 = 3;
    cout << solution(S2, K2) << endl;  // Output: 2

    vector<string> S3 = {"abed\"", "efgh'1"};
    int K3 = 3;
    cout << solution(S3, K3) << endl;  // Output: 0

    vector<string> S4 = {"be", "edf", "Yde", "dge", "abod"};
    int K4 = 4;
    cout << solution(S4, K4) << endl;  // Output: 3

    return 0;
}