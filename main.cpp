#include "src/checkLetter/checkLetter.h"
#include "src/checkWinLose/checkWinLose.h"
#include "src/drawHangman/drawHangman.h"
#include "src/getWord/getWord.h"
#include "src/showHelp/showHelp.h"
#include "src/showMenu/showMenu.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
  char choice;
  int letterStatus;
  char guess;
  int streak = 0;

  do {
    string guesses = "";
    int limbs = 0;
    showMenu();

    cin >> choice;

    switch (choice) {
    // play
    case 'p': {
      string word = getWord();

      // set empty status
      string status = "";
      for (size_t i = 0; i < word.size(); i++) {
        status += '_';
      };

      // guessing process
      drawHangman(limbs);
      cout << endl << status << endl << endl;

      while (true) {
        if (checkWinLose(limbs, word, status, streak)) {
          break;
        }

        // 0 not in word
        // 1 in word
        // 2 alreay guessed
        do {
          // get guess from user
          cout << "Enter your guess: ";
          cin >> guess;
          cout << endl;

          // check guess
          letterStatus = checkLetter(word, guess, guesses, status);

          // add limbs
          if (letterStatus == 0) {
            limbs++;
          }

          // draw hangman and status
          drawHangman(limbs);
          cout << endl << status << endl << endl;

          // add guess to guesses list
          if (guesses.find(guess) == string::npos) {
            guesses += guess;
          }
          cout << endl;

          // display previous guesses
          cout << "You have guessed: ";
          for (char l : guesses) {
            if (l == guesses[0]) {
              cout << l;
            } else {
              cout << ", " << l;
            }
          }
          cout << endl;

        } while (letterStatus == 2);
      }
      break;
    }

    case 'h': {
      showHelp();
      break;
    }

    case 'q': {
      return 0;
    }
    }
  } while (choice != 'q');

  return 0;
}
