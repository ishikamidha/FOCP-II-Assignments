#include <iostream>
#include <string>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()

using namespace std;

int main() {
    string name;

    // Ask user for name
    cout << "Enter your name: ";
    getline(cin, name);

    // List of 10 roasts with placeholder {name}
    string roasts[10] = {
        "{name}, you run like Windows 98.",
        "{name}, even Google can't find your talent.",
        "{name}, you bring everyone so much joy… when you leave.",
        "{name}, you are proof that evolution can go in reverse.",
        "{name}, your brain is on airplane mode.",
        "{name}, if laziness were a sport, you'd come second… because you're too lazy to win.",
        "{name}, you have something on your chin… no, the third one down.",
        "{name}, your secrets are always safe with me. I never even listen.",
        "{name}, you are like a cloud. When you disappear, it’s a beautiful day.",
        "{name}, you have the charisma of a damp rag."
    };

    // Initialize random seed
    srand(time(0));

    // Pick random roast
    int index = rand() % 10;
    string selectedRoast = roasts[index];

    // Replace {name} with actual name
    size_t pos = selectedRoast.find("{name}");
    if (pos != string::npos) {
        selectedRoast.replace(pos, 6, name);
    }

    // Print result
    cout << "\nYour roast:\n";
    cout << selectedRoast << endl;

    return 0;
}