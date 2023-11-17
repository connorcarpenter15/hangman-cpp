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
  string status;
  int limbs = 0;
  char choice;
  char letterGuess;
  int a;
  string guesses;

  do {
    showMenu();

    cin >> choice;

    switch (choice) {
    // play
    case 'p': {
      string word = getWord();

      // set empty status
      string status = "";
      for (int i = 0; i < word.size(); i++) {
        status += '_';
      };

      drawHangman(limbs);
      cout << "Enter your guess: " << endl;
      cin >> letterGuess;
      guesses += letterGuess;

      // 0 not in word
      // 1 in word
      // 2 alreay guessed
      do {
        int a = checkLetter(word, letterGuess, guesses, status);
      for (int i = 0; i < word.size(); i++) {
        if (word[i] == letterGuess) {
          status[i] = letterGuess; } 
      };
      }
      } while (a == 2);
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
