#include <iostream>
#include <string>
#include <unordered_map>
#include <set>

using namespace std;

class MovieTicket {
    unordered_map<int, set<int>> bookings;
    const int MAX_SLOTS = 100;

public:
    bool BOOK(int X, int Y) {
        if (bookings[Y].size() >= MAX_SLOTS || bookings[Y].count(X)) {
            return false;
        }
        bookings[Y].insert(X);
        return true;
    }

    bool CANCEL(int X, int Y) {
        if (bookings.find(Y) == bookings.end() || !bookings[Y].count(X)) {
            return false;
        }
        bookings[Y].erase(X);
        return true;
    }

    bool IS_BOOKED(int X, int Y) {
        return bookings.count(Y) && bookings[Y].count(X);
    }

    int AVAILABLE_TICKETS(int Y) {
        return MAX_SLOTS - bookings[Y].size();
    }
};

int main() {
    int Q;
    cin >> Q;
    MovieTicket mt;
    while (Q--) {
        string query;
        cin >> query;
        if (query == "BOOK") {
            int X, Y; cin >> X >> Y;
            cout << (mt.BOOK(X, Y) ? "true" : "false") << endl;
        } else if (query == "CANCEL") {
            int X, Y; cin >> X >> Y;
            cout << (mt.CANCEL(X, Y) ? "true" : "false") << endl;
        } else if (query == "IS_BOOKED") {
            int X, Y; cin >> X >> Y;
            cout << (mt.IS_BOOKED(X, Y) ? "true" : "false") << endl;
        } else if (query == "AVAILABLE_TICKETS") {
            int Y; cin >> Y;
            cout << mt.AVAILABLE_TICKETS(Y) << endl;
        }
    }
    return 0;
}