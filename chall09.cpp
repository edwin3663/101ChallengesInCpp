/** Write a program to find all numbers up to 10000
    where the sum of the factorial of their digits
    equals the number.

    Example: 145 = 1! + 4! + 5! = 1 + 24 + 120 = 145
    @file chall09.cpp
    @author Peter Saffold
    @date 10/23/2020
*/
#include <iostream>

bool isCurious(int num);
int factorial(int num);

int main(int argc, char* argv[]) {
     
    for (int i = 0; i <= 10000; i++) {
        if (isCurious(i)) {
            std::cout << i << std::endl;
        }
    }

    return 0;
}

int factorial(int num) {
    int sum = 1;
    if (num == 0) {
        return sum;
    }
    for (int i = 2; i <= num; i++) {
        sum *= i;
    }
    return sum;
}

bool isCurious(int num) {
    if (num == 0) {
        return false;
    }
    int sum = 0;
    int temp = num;
    while(temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    return sum == num;
}

