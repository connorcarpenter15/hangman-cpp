#include "checkWinLose.h"
#include <iostream>
#include <string>

using namespace std;

// if terminate, return true, else return false
bool checkWinLose(int limbs, string &word, string &status) {
  if (limbs >= 6) {
    cout << "Oh no, you have ran out of guesses!";
    return true; // return false if lose
  } else if (status == word) {
    cout << "You won!";
    return true;
  } else {
    // not win or lose
    return false;
  }
  return false;
}
