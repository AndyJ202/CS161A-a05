/******************************************************************************
# Author:           Andy Joy
# Assignment:       Assignment 5
# Date:             05/23/2026
# Description:      This program takes the number of people, the average number
#                   of slices per person, and the cost of one pizza as an input,
#                   and outputs the cost of pizzas, tax, delivery cost, and 
#                   total cost. Once the user is done entering data, the program
#                   will output a summary of all the entries.
# Input:            numPeople (int), avgSlices (double), costPizza (double), 
#                   choice (char).
# Output:           numPizzas (int), costPizzas (double), costTax (double), 
#                   costDelivery (double), totalCost (double), numEntries (int),
#                   totalPizzas (int), maxPeople (int), maxCost (double).
# Sources:          N/A
#******************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Constants
const int NUM_SLICES_PER_PIZZA = 8;
const double SALES_TAX = 0.07; //7% sales tax
const double DELIVERY_FEE = 0.20; //20% after tax

//Main function
int main()
{
  //Declare variables for input
  int numPeople = 0;
  double avgSlices = 0; 
  double costPizza = 0;
  char choice;

  //Declare variables for output per entry
  int numPizzas = 0;
  double costPizzas = 0;
  double costTax = 0;
  double costDelivery = 0;
  double totalCost = 0;

  //Declare variables for final output
  int numEntries = 0;
  int totalPizzas = 0;
  int maxPeople = 0;
  double maxCost = 0;

  //Welcome message
  cout << "Welcome to my Pizza Party Statistics program!"<< endl;

  do {
  //Get user input from user first
  cout << "\nEnter the number of people, average number of slices per person, and the cost of a pizza separated by a space: ";
  cin >> numPeople >> avgSlices >> costPizza;

  //Calculations
  numPizzas = ceil((numPeople * avgSlices) / NUM_SLICES_PER_PIZZA);
  costPizzas = numPizzas * costPizza;
  costTax = costPizzas * SALES_TAX;
  costDelivery = (costPizzas + costTax) * DELIVERY_FEE;
  totalCost = costPizzas + costTax + costDelivery;


  //Print all values here.
  cout << "\nNumber of pizzas: " << numPizzas << endl;
  cout << "Cost of pizzas:  $" << fixed << showpoint << setprecision(2) << costPizzas << endl;
  cout << "Tax:             $" << costTax << endl;
  cout << "Delivery:        $" << costDelivery << endl;
  cout << "Total Cost:      $" << totalCost << endl;

  //Update final output variables
  numEntries ++;
  totalPizzas += numPizzas;
  
  if (numPeople > maxPeople) {
    maxPeople = numPeople;
  }
  if (totalCost > maxCost) {
    maxCost = totalCost;
  }

  cout << "\nDo you want to enter more (y/n): ";
  cin >> choice;
  } while ((choice == 'y' || choice == 'Y') && (choice != 'n' && choice != 'N'));
  
  cout << "\nNumber of entries: " << numEntries << endl;
  cout << "Total number of pizzas: " << totalPizzas << endl;
  cout << "Average number of pizzas: "<< showpoint << setprecision(1) << static_cast<double>(totalPizzas) / numEntries << endl;
  cout << "Maximum number of people: "<< maxPeople << endl;
  cout << "Maximum cost of pizzas: $" << fixed << showpoint << setprecision(2) << maxCost << endl;

  cout << "\nThank you for using my program!" << endl;

  return 0;
}