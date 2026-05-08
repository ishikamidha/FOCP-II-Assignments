#include <iostream>
#include <string>
#include <cstdlib>  // rand(), srand()
#include <ctime>    // time()

using namespace std;

int main() {
    string name;

    // Ask for student's name
    cout << "Enter your name: ";
    getline(cin, name);

    // List of 10 excuses with {name} placeholder
    string excuses[10] = {
        "{name}, my dog accidentally submitted my assignment… and then deleted it.",
        "{name}, I was about to finish my work but there was a sudden power cut.",
        "{name}, my laptop decided to update itself for 3 hours straight.",
        "{name}, I was helping a friend and lost track of time.",
        "{name}, I got stuck in unexpected traffic even though I started early.",
        "{name}, my internet stopped working right when I needed it most.",
        "{name}, I wasn’t feeling well and couldn’t complete the task.",
        "{name}, I misunderstood the deadline and thought it was tomorrow.",
        "{name}, I accidentally worked on the wrong file the whole time.",
        "{name}, my alarm didn’t ring and I woke up too late to finish it."
    };

    // Seed random generator
    srand(time(0));

    // Pick random excuse
    int index = rand() % 10;
    string selected = excuses[index];

    // Replace {name} with actual name
    size_t pos = selected.find("{name}");
    if (pos != string::npos) {
        selected.replace(pos, 6, name);
    }

    // Output result
    cout << "\nYour excuse:\n";
    cout << selected << endl;

    return 0;
}