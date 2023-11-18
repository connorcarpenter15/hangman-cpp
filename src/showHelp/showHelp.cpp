#include "showHelp.h"
#include <iostream>

using namespace std;

/*
 * Display the help menu
 */
void showHelp() {
  cout << "Help" << endl;
  cout << "----" << endl;
  cout << "Once you select play, the program will randomly generate a word and "
          "display the according number of blanks spaces. You will then be "
          "asked to input a character. If the inputted character is in the "
          "word, the letter will be displayed in the correct position. If the "
          "your guess is incorrect, a piece of the hangman will be drawn. "
          "After each guess, the current hangman and word will be displayed "
          "and you will be able to guess again. Once the hangman is fully "
          "drawn or you guess the whole word, the game will end and your win "
          "and loss ratio will be displayed. You can then choose to play again "
          "or exit the program.\n\n"
       << endl;
  cout << endl;
}
