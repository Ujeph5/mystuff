/***********************************************************************
* Program:
*    Assignment 16, Compute Tax          
*    Brother Dewey, CS124
* Author:
*    Joseph Alexander
* Summary: 
*    Prompt the user for their income and output their tax bracket.
*
*    Estimated:  0.5 hrs   
*    Actual:     0.2 hrs
*      The most difficult part was writing the IF statements in a quick
*      manner.
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * computeTax
 * Compute user's tax bracket using IF statements
 ***********************************************************************/
int computeTax(float income)
{
   int tax;

   if (income >= 336550)
      tax = 35;
   else if (income >= 188450)
      tax = 33;
   else if (income >= 123700)
      tax = 28;
   else if (income >= 61300)
      tax = 25;
   else if (income >= 15100)
      tax = 15;
   else
      tax = 10;

   return tax;
}

/**********************************************************************
 * main
 * Prompt user for income and call the function computeTax and output
 * tax bracket
 ***********************************************************************/
int main()
{
   float income;

   cout << "Income: ";
   cin  >> income;

   int taxBracket = computeTax(income);
   cout << "Your tax bracket is " << taxBracket << "%\n";

   return 0;
}
