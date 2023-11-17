#include <iostream>

using namespace std;

void drawHangman(int limbs) {
    cout << "You have " << 6 - limbs << " guesses left" << endl << endl;

    // cout << " ╔════╤═ " <<
    // endl << " ║    O  " <<
    // endl << " ║   \\|/" <<
    // endl << " ║    |  " <<
    // endl << " ║   / \\" <<
    // endl << " ║       " <<
    // endl << "═╩═══════";

    if (limbs == 0) {
        cout << " +----+- " <<
        endl << " |       " <<
        endl << " |       " <<
        endl << " |       " <<
        endl << " |       " <<
        endl << " |       " <<
        endl << "-+-------";

    } else if (limbs == 1) {
        cout << " +----+- " <<
        endl << " |    O  " <<
        endl << " |       " <<
        endl << " |       " <<
        endl << " |       " <<
        endl << " |       " <<
        endl << "-+-------";

    } else if (limbs == 2) {
        cout << " +----+- " <<
        endl << " |    O  " <<
        endl << " |    |  " <<
        endl << " |    |  " <<
        endl << " |       " <<
        endl << " |       " <<
        endl << "-+-------";

    } else if (limbs == 3) {
        cout << " +----+- " <<
        endl << " |    O  " <<
        endl << " |   \\| " <<
        endl << " |    |  " <<
        endl << " |       " <<
        endl << " |       " <<
        endl << "-+-------";

    } else if (limbs == 4) {
        cout << " +----+- " <<
        endl << " |    O  " <<
        endl << " |   \\|/" <<
        endl << " |    |  " <<
        endl << " |   /   " <<
        endl << " |       " <<
        endl << "-+-------";

    } else if (limbs == 5) {
        cout << " +----+- " <<
        endl << " |    O  " <<
        endl << " |   \\|/" <<
        endl << " |    |  " <<
        endl << " |   / \\" <<
        endl << " |       " <<
        endl << "-+-------";

    } else { //limbs == 6

    cout << " +----+- " <<
    endl << " |    O  " <<
    endl << " |   \\|/" <<
    endl << " |    |  " <<
    endl << " |   / \\" <<
    endl << " |       " <<
    endl << "-+-------";
    }

    cout << endl;
}

