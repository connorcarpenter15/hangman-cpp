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

  do {
    cin >> choice;

    switch (choice) {
    case 'p':
      string word = getWord();
      break;
    }

  } while (choice != 'q');

  return 0;
}
