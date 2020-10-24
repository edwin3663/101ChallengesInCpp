/** Write a program to find the index of the first term in
    the Fibonacci sequence to contain 10 digits
    
    @file chall10.cpp
    @author Peter Saffold
    @date 10/24/2020
*/
#include <iostream>

int fibonacci(int n);

int main(int argc, char *argv[]) {
    int result = 0;
    int n = 3;

    while (result < 1000000000) {
        result = fibonacci(n);
        std::cout << result << std::endl;
        n++;
    }

    std::cout << std::endl << "The index of first seqence with 10 digits is: " << n-1;
    std::cout << std::endl;
    return 0;
}

int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
