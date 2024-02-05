#include <iostream>

using namespace std;

void printPrimeFactors(int number, int factor = 2) {
 
    if (number<2) {
      //cout << "\b\b \n";
      return; //end case

    } //end of if statement

    if (number%factor==0) {
      cout << factor << ", ";
      printPrimeFactors(number/factor, factor); //finds the factors
    
    } //end of if statement

    else {
      printPrimeFactors(number, factor+1); //increments

 } //end of else statement
}


int main() {
   int n = 2345;
   cout << "The prime factors of " << n << " are:" << endl;
   printPrimeFactors(n);
   return 0;
}