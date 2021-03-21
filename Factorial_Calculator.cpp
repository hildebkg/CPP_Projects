#include <iostream>

// function prototype: 
int factorial(const int &);

int main () {
  int intNum;
  std::cout << "Enter an integer of which to calculate the factorial: ";
  std::cin >> intNum;
  factorial(intNum);
  if (factorial(intNum) == -1) {
    std::cout << "Error: factorial for negative number is undefined" << std::endl;
    return 1;
  }
  else {
    std::cout << "The factorial is: " << factorial(intNum) << std::endl;
  } return 0;
}

  int factorial(const int &userNum) {
    if (userNum < 0) {
      return -1;
    } else if ((userNum == 0) || (userNum == 1)) {
      return 1;
    } else {
        int factorial = 1;
        int number = userNum;
        int i;
        for (i = 1; i <= number; ++i) {
          factorial = factorial * i;
        } return factorial;
      }
  }
