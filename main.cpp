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
      while (true) {
        drawHangman(limbs);
        if (checkWinLose(limbs, word, status)) {
          break;
        }

        // 0 not in word
        // 1 in word
        // 2 alreay guessed
        do {
          cout << endl << status << endl << endl;
          cout << "Enter your guess: ";
          cin >> guess;

          // c++ moment
          cout << endl << endl;
          cout << "You have guessed: " << guesses << endl;
          letterStatus = checkLetter(word, guess, guesses, status);
          guesses += guess;
          cout << endl;

          if (letterStatus == 0) {
            limbs++;
          }

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
