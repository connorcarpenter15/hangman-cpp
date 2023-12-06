#include "checkWinLose.h"
#include <iostream>
#include <string>

using namespace std;

// if terminate, return true, else return false
bool checkWinLose(int limbs, string &word, string &status, int &streak) {
  if (limbs >= 6) {
    cout << "Oh no, you have ran out of guesses!" << endl;
    cout << "The word was: " << word << endl;

    if (streak != 0) {
      cout << "You have lost your streak!" << endl;
    }

    streak = 0;

    return true; // return false if lose
  } else if (status == word) {
    cout << "\nYou won!" << endl;
    cout << "The word was: " << word << endl;

    streak++;

    cout << "Current streak: " << streak << endl;

    return true;
  } else {
    // not win or lose
    return false;
  }
  return false;
}
