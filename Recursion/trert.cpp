#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> &A) {
    int N = A.size();
    int remainingTokens = 0;

    for (int i = 0; i < N; i++) {
        int exchangePairs = A[i] / 2; // Number of pairs that can be exchanged from stack i

        remainingTokens += (A[i] - exchangePairs * 2); // Tokens that remain after exchanging pairs

        if (i + 1 < N) {
            A[i + 1] += exchangePairs; // Add exchanged tokens to the next stack (i+1)
        }
    }

    remainingTokens += A[N - 1]; // Add any remaining tokens on the last stack

    return remainingTokens;
}

int main() {
    vector<int> A1 = {2, 3};
    cout << "Result for A1: " << solution(A1) << endl; // Output: 1

    vector<int> A2 = {1, 0, 4, 1};
    cout << "Result for A2: " << solution(A2) << endl; // Output: 3

    vector<int> A3 = {5};
    cout << "Result for A3: " << solution(A3) << endl; // Output: 2

    vector<int> A4 = {4, 0, 3, 0};
    cout << "Result for A4: " << solution(A4) << endl; // Output: 1

    return 0;
}
