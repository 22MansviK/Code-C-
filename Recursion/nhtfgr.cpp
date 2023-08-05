#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int>& A) {
    int N = A.size();
    vector<int> tokens(N + 1, 0);

    for (int i = 0; i < N; i++) {
        tokens[i + 1] = A[i] + tokens[i] / 2;
        tokens[i] = tokens[i] % 2;
    }

    return tokens[N];
}

int main() {
    vector<int> A1 = {2, 3};
    cout << "Minimum tokens remaining: " << solution(A1) << endl; // Output: 1

    vector<int> A2 = {1, 0, 4, 1};
    cout << "Minimum tokens remaining: " << solution(A2) << endl; // Output: 3

    vector<int> A3 = {5};
    cout << "Minimum tokens remaining: " << solution(A3) << endl; // Output: 2

    vector<int> A4 = {4, 0, 3, 0};
    cout << "Minimum tokens remaining: " << solution(A4) << endl; // Output: 1

    return 0;
}
