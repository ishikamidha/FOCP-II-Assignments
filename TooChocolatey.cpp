#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

void solve() {
    int N;
    if (!(cin >> N)) return;
    
    map<int, int, greater<int>> counts;
    for (int i = 0; i < N; i++) {
        int val;
        cin >> val;
        counts[val]++;
    }

    long long alex_total = 0;
    long long bob_total = 0;

    for (auto const& [value, freq] : counts) {
        alex_total += value;
        if (freq > 1) {
            bob_total += value;
        }
    }

    if (alex_total > bob_total) {
        cout << "Alex" << endl;
    } else {
        cout << "Bob" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        solve();
    }
    return 0;
}