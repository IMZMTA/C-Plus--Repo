#include <iostream>
#include <vector>

using namespace std;

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int N, T;
    cin >> N >> T;
    
    vector<int> E(N);
    for (int i = 0; i < N; ++i) {
        cin >> E[i];
    }
    
    vector<int> J(N - 1);
    for (int i = 0; i < N - 1; ++i) {
        cin >> J[i];
    }
    
    vector<long long> dp(N);
    for (int i = 0; i < N; ++i) {
        dp[i] = 1LL << 60;
    }
    
    dp[0] = 0;
    
    for (int i = 0; i < N; ++i) {
        if (i + 1 < N) {
            dp[i + 1] = min(dp[i + 1], dp[i] + E[i]);
            dp[i + 1] = min(dp[i + 1], ((dp[i] + 2) / 3 + 1) * 3 + J[i] + E[i]);
        }
        if (i + 2 < N) {
            dp[i + 2] = min(dp[i + 2], dp[i] + T + E[i] + E[i + 1]);
            dp[i + 2] = min(dp[i + 2], ((dp[i] + 2) / 3 + 1) * 3 + J[i] + E[i] + T + E[i + 1]);
        }
        if (i + 3 < N) {
            dp[i + 3] = min(dp[i + 3], dp[i] + 2 * T + E[i] + E[i + 1] + E[i + 2]);
            dp[i + 3] = min(dp[i + 3], ((dp[i] + 2) / 3 + 1) * 3 + J[i] + 2 * T + E[i] + E[i + 1] + E[i + 2]);
        }
    }
    
    cout << dp[N - 1] + T << endl;
    
    return 0;
}