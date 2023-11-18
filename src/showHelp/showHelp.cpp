#include "showHelp.h"
#include <iostream>

using namespace std;

/*
 * Display the help menu
 */
void showHelp() {
  cout << "\nHelp" << endl;
  cout << "----" << endl;
  cout
      << "Once you select play, the program will randomly generate a word and "
         "\n"
         "display the according number of blanks spaces. You will then be \n"
         "asked to input a character. If the inputted character is in the \n"
         "word, the letter will be displayed in the correct position. If the \n"
         "your guess is incorrect, a piece of the hangman will be drawn. \n"
         "After each guess, the current hangman and word will be displayed \n"
         "and you will be able to guess again. Once the hangman is fully \n"
         "drawn or you guess the whole word, the game will end and a win \n"
         "and loss message will be displayed. You can then choose to play "
         "again\n"
         "or exit the program."
      << endl;
  cout << endl;
}
