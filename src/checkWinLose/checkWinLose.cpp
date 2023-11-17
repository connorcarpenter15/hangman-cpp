#include <iostream>

using namespace std;

bool checkWinLose(int limbs) {
    if (limbs >= 6) {
        cout << "Oh no, you have ran out of guesses!";

        return false; //return false if lose
    }
}