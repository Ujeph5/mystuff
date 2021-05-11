#include <iostream>
using namespace std;

int main()
{
   int days;
   cout << "How many days: ";
   cin >> days;

   int weeks = (float)days / 7;
   int leftOverDays = days % 7;

   cout << "\tweeks: " << weeks << endl;
   cout << "\tdays:  " << leftOverDays << endl;

   return 0;
}