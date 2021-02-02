// Program that, given an amount of money in cents, outputs that amount in the combination that uses the smallest number of coins.

#include <iostream>
using namespace std;

int main() {

   int dollars;
   int quarters;
   int dimes;
   int nickels;
   int pennies;
   int change;
   int moneyLeftOver;
     
   cout << "Enter an amount of money in cents. ";
   
   cin >> change;
   
   if (change <= 0) {
      cout << "No change" << endl;
   }
   
   dollars = change / 100; // num of dollars
   moneyLeftOver = change % 100; // money still left without dollars
   
   quarters = moneyLeftOver / 25; // num of quarters
   moneyLeftOver = moneyLeftOver % 25; // money still left without quarters
   
   dimes = moneyLeftOver / 10; // num of dimes
   moneyLeftOver = moneyLeftOver % 10; // money still left without quarters
   
   nickels = moneyLeftOver / 5; // num of nickels
   moneyLeftOver = moneyLeftOver % 5; // money still left without nickels
   
   pennies = moneyLeftOver / 1; // num of pennies
   
   if (dollars > 1) {
      cout << dollars << " " << "dollars" << endl;
   }
   
   if (dollars == 1) {
      cout << dollars << " " << "dollar" << endl;
   }
   
   if (quarters > 1) {
      cout << quarters << " " << "quarters" << endl;
   }
   if (quarters == 1) {
      cout << quarters << " " << "quarter" << endl;
   }
   
   if (dimes > 1) {
      cout << dimes << " " << "dimes" << endl;
   }
   if (dimes == 1) {
      cout << dimes << " " << "dime" << endl;
   }
   
   if (nickels > 1) {
      cout << nickels << " " << "nickels" << endl;
   }
   if (nickels == 1) {
      cout << nickels << " " << "nickel" << endl;
   }
   
   if (pennies > 1) {
      cout << pennies << " " << "pennies" << endl;
   }
   if (pennies == 1) {
      cout << pennies << " " << "penny" << endl;
   }         
   return 0;
}

