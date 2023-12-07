#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long count_good_subarrays(long long N, vector<int>& A) {
    long long count = 0;
    long long window_start = 0;
    long long max_diff = 0;

    for (long long window_end = 1; window_end < N; ++window_end) {
        max_diff = std::max(max_diff, abs(A[window_end] - A[window_end - 1]));

        if (max_diff <= window_end - window_start) {
            count += window_end - window_start;
        } else {
            window_start = window_end - max_diff;
        }
    }

    return count + N;
}

int main() {
    long long T;
    cin >> T;

    vector<long long> results;

    for (long long t = 0; t < T; ++t) {
        long long N;
        cin >> N;

        vector<int> A(N);
        for (long long i = 0; i < N; ++i) {
            cin >> A[i];
        }

        long long result = count_good_subarrays(N, A);
        results.push_back(result);
    }

    for (long long result : results) {
        cout << result << endl;
    }

    return 0;
}
