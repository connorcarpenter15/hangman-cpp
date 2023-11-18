#include "checkLetter.h"
#include <iostream>
#include <string>

using namespace std;

/*
 * Checks if the inputted letter is in the word and edits the status
 */
int checkLetter(string &word, char guess, string &guesses, string &status) {
  for (char c : guesses) {
    if (c == guess) {
      cout << "Error: repeated guess. Please guess a new letter.";
      return 2;
    }
  }

  for (size_t i = 0; i < word.length(); ++i) {
    if (guess == word[i]) {
      status[i] = guess;
      cout << "The letter '" << guess << "' was in the word.";
      return 1;
    } else {
      cout << "The letter '" << guess << "' was not in the word.";
      return 0;
    }
  }

  return 0;
}
