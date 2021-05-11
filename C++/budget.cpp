#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   float income;
   float budgetLiving;
   float actualLiving;
   float actualTax;
   float actualTithing;
   float actualOther;

   cout << "This program keeps track of your monthly budget\n"
        << "Please enter the following:\n";
   cout << "\tYour monthly income: ";
   cin  >> income;
   cout << "\tYour budgeted living expenses: ";
   cin  >> budgetLiving;
   cout << "\tYour actual living expenses: ";
   cin  >> actualLiving;
   cout << "\tYour actual taxes withheld: ";
   cin  >> actualTax;
   cout << "\tYour actual tithe offerings: ";
   cin  >> actualTithing;
   cout << "\tYour actual other expenses: ";
   cin  >> actualOther;

   cout << "\n\nThe following is a report on your monthly expenses\n"
        << "\tItem";

   return 0;
}