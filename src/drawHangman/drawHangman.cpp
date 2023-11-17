#include <iostream>

using namespace std;

void drawHangman(int limbs) {
    // cout << " ╔════╤═ " <<
    // endl << " ║    O  " <<
    // endl << " ║   \\|/" <<
    // endl << " ║    |  " <<
    // endl << " ║   / \\" <<
    // endl << " ║       " <<
    // endl << "═╩═══════";

    if (limbs == 0) {
        cout << " +----+-" <<
        endl << " |    O  " <<
        endl << " |   \\|/" <<
        endl << " |    |  " <<
        endl << " |   / \\" <<
        endl << " |       " <<
        endl << "-+-------";
    } else if (limbs == 0) {

    } else if (limbs == 0) {

    } else if (limbs == 0) {

    } else if (limbs == 0) {

    } else if (limbs == 0) {

    } else {

    cout << " +----+-" <<
    endl << " |    O  " <<
    endl << " |   \\|/" <<
    endl << " |    |  " <<
    endl << " |   / \\" <<
    endl << " |       " <<
    endl << "-+-------";
    }
}

int main() {
    drawHangman(6);
}

