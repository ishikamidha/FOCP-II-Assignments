#include <iostream>

using namespace std;

int main() {
    long long L, R;
    if (!(cin >> L >> R)) return 0;

    long long odd_count = (R + 1) / 2 - L / 2;

    if (odd_count % 2 == 0) {
        cout << "even" << endl;
    } else {
        cout << "odd" << endl;
    }

    return 0;
}