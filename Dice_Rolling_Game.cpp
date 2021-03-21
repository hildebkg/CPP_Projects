/* 
This is a simple game that generates two random numbers that represent two die rolls. 
If the sum of the dice is 7, 9, or 11, you win.
If the sum of the dice is 2, 3, or 5, the computer wins.
If the sum is none of those numbers, the dice are rolled again. 
*/

#include <ctime>
#include <iostream>

int main() {
  srand(time(0));         // generates random seed
  int winOrLose;          // checks if dice roll meets winning or losing condition
  int sum;                // sum of two dice rolls
  int randomNum;          // first dice roll value
  int randomNum2;         // second dice roll value
  char playAgain = 'Y';   // lets player choose if they want to play again or stop

  while (playAgain == 'Y') {
    winOrLose = 0;
    while (winOrLose != 1) {
      randomNum = rand()%6 + 1;
      randomNum2 = rand()%6 + 1;
      sum = randomNum + randomNum2;

      if ((sum == 7) || (sum == 9) || (sum == 11)) {
        std::cout << "Die 1: " << randomNum << "     Die 2: " << randomNum2 << "     Total: " << sum << std::endl;
        winOrLose = 1;
        std::cout << "You win! Play again? (Y/N)" << std::endl;
        std::cin >> playAgain;
      } else if ((sum == 2) || (sum == 3) || (sum == 5)) {
          std::cout << "Die 1: " << randomNum << "     Die 2: " << randomNum2 << "     Total: " << sum << std::endl;
          winOrLose = 1;
          std::cout << "You lose! Play again? (Y/N)" << std::endl;
          std::cin >> playAgain;
        } else {
            std::cout << "Die 1: " << randomNum << "     Die 2: " << randomNum2 << " Total: " << sum << std::endl;
            std::cout << "No one wins. Let's roll again." << std::endl << std::endl;
            sum = 0;
          }
    }
  }
return 0;
}
