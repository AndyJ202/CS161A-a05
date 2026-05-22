/******************************************************************************
# Author:           Andy Joy
# Assignment:       Assignment 5
# Date:             05/14/2026
# Description:      This program compares two phrases and determines if one
#                   phrase appears in the other.
# Input:            phrase1 (string) and phrase2 (string).
# Output:           phrase1 (string) and phrase2 (string).
# Sources:          N/A
#******************************************************************************/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//Main function
int main() {

  //Variables declared
  string phrase1 = " ";
  string phrase2 = " ";

  //Welcome message
  cout << "Welcome to the Phrases and Subphrases program!" << endl;

  //User input
  cout << "\nEnter Phrase 1: ";
  getline (cin, phrase1);
  cout << "You entered: " << phrase1;

  cout << "\nEnter Phrase 2: ";
  getline (cin, phrase2);
  cout << "You entered: " << phrase2 << endl;

  //Comparison of phrases
  if ((phrase1.find(phrase2) !=  string::npos) && (phrase2.find(phrase1) !=  string::npos)){
    cout << "\nBoth phrases match." << endl;
  }
  else if (phrase1.find(phrase2) !=  string::npos) {
    cout << "\n" << phrase2 << " is found in " << phrase1 << endl;
    cout << phrase1.substr(phrase1.find(phrase2)) << endl;
  }
  else if (phrase2.find(phrase1) !=  string::npos) {
    cout << "\n" << phrase1 << " is found in " << phrase2 << endl;
    cout << phrase2.substr(phrase2.find(phrase1)) << endl;
  }
  else {
    cout << "\nNo match." << endl;
  }

  //Goodbye message
  cout << "\nThank you for using my program!" << endl;

  return 0;
}