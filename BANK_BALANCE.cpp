#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Bank {
    unordered_map<int, long long> accounts;

public:
    bool CREATE(int X, long long Y) {
        if (accounts.find(X) != accounts.end()) {
            accounts[X] += Y;
            return false;
        }
        accounts[X] = Y;
        return true;
    }

    bool DEBIT(int X, long long Y) {
        if (accounts.find(X) == accounts.end() || accounts[X] < Y) {
            return false;
        }
        accounts[X] -= Y;
        return true;
    }

    bool CREDIT(int X, long long Y) {
        if (accounts.find(X) == accounts.end()) {
            return false;
        }
        accounts[X] += Y;
        return true;
    }

    long long BALANCE(int X) {
        if (accounts.find(X) == accounts.end()) {
            return -1;
        }
        return accounts[X];
    }
};

int main() {
    int Q;
    cin >> Q;
    Bank bank;
    while (Q--) {
        string query;
        cin >> query;
        if (query == "CREATE") {
            int X; long long Y; cin >> X >> Y;
            cout << (bank.CREATE(X, Y) ? "true" : "false") << endl;
        } else if (query == "DEBIT") {
            int X; long long Y; cin >> X >> Y;
            cout << (bank.DEBIT(X, Y) ? "true" : "false") << endl;
        } else if (query == "CREDIT") {
            int X; long long Y; cin >> X >> Y;
            cout << (bank.CREDIT(X, Y) ? "true" : "false") << endl;
        } else if (query == "BALANCE") {
            int X; cin >> X;
            cout << bank.BALANCE(X) << endl;
        }
    }
    return 0;
}