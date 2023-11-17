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

    cout << " +----+-" <<
    endl << " |    O  " <<
    endl << " |   \\|/" <<
    endl << " |    |  " <<
    endl << " |   / \\" <<
    endl << " |       " <<
    endl << "-+-------";
}

int main() {
    drawHangman(6);
}

