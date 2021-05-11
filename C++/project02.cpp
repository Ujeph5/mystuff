/***********************************************************************
* Program:
*    Project 02, Monthly Budget
*    Brother Dewey, CS 124
* Author:
*    Joseph Alexander
* Summary: 
*    Manage personal finances for a month. The program will ask for
*    budget income and expenditures, then how much was actually made and
*    spent. Then display a report of whether one is on target to meet
*    their financial goals.
*  
*    Estimated:  3.0 hrs   
*    Actual:     4.0 hrs
*      I have been unable to get the difference and budgeted other to
*      appear on the screen.
************************************************************************/

#include <iostream>
#include <iomanip> //required for using setw()
using namespace std;

/**********************************************************************
 * getIncome
 * Prompt user for income and return to MAIN
 ***********************************************************************/

double getIncome()
{
   double income;
   cout << "\tYour monthly income: ";
   cin >> income;
   return income;
}

/**********************************************************************
 * getBudgetLiving
 * Prompt user for budget living expenses and return to MAIN
 ***********************************************************************/

double getBudgetLiving()
{
   double budgetLiving;
   cout << "\tYour budgeted living expenses: ";
   cin >> budgetLiving;
   return budgetLiving;
}

/**********************************************************************
 * getActualLiving
 * Prompt user for actual living expenses and return to MAIN
 ***********************************************************************/

double getActualLiving()
{
   double actualLiving;
   cout << "\tYour actual living expenses: ";
   cin >> actualLiving;
   return actualLiving;
}

/**********************************************************************
 * getActualTax
 * Prompt user for actual taxes and return to MAIN
 ***********************************************************************/

double getActualTax()
{
   double actualTax;
   cout << "\tYour actual taxes withheld: ";
   cin >> actualTax;
   return actualTax;
}

/**********************************************************************
 * getActualTithing
 * Prompt user for actual tithing and return to MAIN
 ***********************************************************************/

double getActualTithing()
{
   double actualTithing;
   cout << "\tYour actual tithe offerings: ";
   cin >> actualTithing;
   return actualTithing;
}

/**********************************************************************
 * getActualOther
 * Prompt user for actual other expenses and return to MAIN
 ***********************************************************************/

double getActualOther()
{
   double actualOther;
   cout << "\tYour actual other expenses: ";
   cin >> actualOther;
   return actualOther;
}

/**********************************************************************
 * computeTithing
 * Calculate the amount of tithing (1/10) of income
 ***********************************************************************/

double computeTithing(double income)
{
   double tithing = income / 10;
   return tithing;
}

/**********************************************************************
 * computeTax
 * Return 0.0
 ***********************************************************************/

double computeTax()
{
   return 0.0;
}

/**********************************************************************
 * getBudgetOther
 * Calculate the income leftover
 ***********************************************************************/

double calcBudgetOther(double income, double tax, double tithing,
                      double living)
{
   double budgetOther = income - tax - tithing - living;
   return budgetOther;
}

/**********************************************************************
 * getActualDifference
 * Calculate the actual difference
 ***********************************************************************/

double calcActualDifference(double income, double tax, double tithing,
                           double living, double other)
{
   double actualDifference = income - tax - tithing - living - other;
   return actualDifference;
}

/**********************************************************************
 * display
 * Prompt user for budget and expenses and display to screen
 ***********************************************************************/

void display(double income, double budgetLiving, double actualLiving,
             double actualTax, double actualTithing, double actualOther,
             double budgetOther, double actualDifference)
{
   char divider[256] = "===============";

   cout << "\nThe following is a report on your monthly expenses\n";
   cout << "\t" << left << setw(16) << "Item"
        << "      Budget    "
        << "      Actual\n";
   cout << "\t" << divider << " " << divider << " " << divider << endl;
   cout << "\t" << left << setw(16) << "Income"
        << "$" << right
        << setw(11) << income << "    $" << setw(11) << income << endl;
   cout << "\t" << left << setw(16) << "Taxes"
        << "$" << right << setw(11)
        << computeTax() << "    $" << setw(11) << actualTax << endl;
   cout << "\t" << left << setw(16) << "Tithing"
        << "$" << right
        << setw(11) << computeTithing(income) << "    $" << setw(11)
        << actualTithing << endl;
   cout << "\t" << left << setw(16) << "Living"
        << "$" << right << setw(11)
        << budgetLiving << "    $" << setw(11) << actualLiving << endl;
   cout << "\t" << left << setw(16) << "Other"
        << "$" << right << setw(11)
        << budgetOther << "    $" << setw(11) << actualOther << endl;
   cout << "\t" << divider << " " << divider << " " << divider << endl;
   cout << "\t" << left << setw(16) << "Difference"
        << "$" << right
        << setw(11) << 0.0 << "    $" << setw(11) << actualDifference
        << endl;

   return;
}

/**********************************************************************
 * MAIN
 * Ask for monthly income and expenses, then display the budget and
 * actual expenses in a table.
 ***********************************************************************/

int main()
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   double income;
   double budgetLiving;
   double actualLiving;
   double actualTax;
   double actualTithing;
   double actualOther;
   double budgetTax = computeTax();
   double budgetTithing = computeTithing(income);
   double budgetOther = calcBudgetOther(income, budgetTax, budgetTithing,
                                       budgetLiving);
   double actualDifference = calcActualDifference(income, actualTax,
                                                 actualTithing,
                                                 actualLiving, actualOther);

   // input questions
   cout << "This program keeps track of your monthly budget\n"
        << "Please enter the following:\n";
   income = getIncome();
   budgetLiving = getBudgetLiving();
   actualLiving = getActualLiving();
   actualTax = getActualTax();
   actualTithing = getActualTithing();
   actualOther = getActualOther();

   // output table
   display(income, budgetLiving, actualLiving, actualTax, actualTithing,
           actualOther, budgetOther, actualDifference);

   return 0;
}
