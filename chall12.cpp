/** Determines the number of trailing zeros at the end of X factorial.
    For example, 5! is 120 which has one trailing zero.
    @file chall12.cpp
    @author Peter Saffold
    @date 10/24/2020
*/
#include <iostream>

int factorial(int num);
int countTrailingZeros(int num);

int main(int argc, char* argv[]) {
    int num, fact, count;

    std::cout << "Enter a number greater than zero: ";
    std::cin >> num;
    std::cout << std::endl << num << " factorial has " << countTrailingZeros(factorial(num)) << 
              " trailing zeros" << std::endl;

    return 0;
}

int countTrailingZeros(int num) {
    int count = 0;
    int digit = 0;
    while (num > 0 && digit == 0) {
        digit = num % 10;
        if (digit == 0) {
            count++;
        }
        num /= 10;
    }
    return count;
}

int factorial(int num) {
    int sum = 1;
    for (int i = 1; i <= num; i++) {
        sum *= i;
    }
    return sum;
}

