/** Computes the Cardano Triplits that exist for an a+b+c <= 100
    @file chall13.cpp
    @author Peter Saffold
    @date 10/25/2020
*/
#include <iostream>
#include <cmath>

int main(int argc, char* argv[]) {

    for (int a = 0; a <= 100; a++) {
        for (int b = 0; b <= 100; b++) {
            for (int c = 0; c <= 100; c++) {
                if (a + b + c <= 100) {
                    double b_c = b * sqrt(c);
                    double sum = cbrt(a+b_c) + cbrt(a-b_c);
                    if (sum < 1.000001 && sum > 0.999999) {
                        std::cout << "(" << a << "," << b << "," << c << ")" << std::endl;
                    }
                }
            }
        }
    }
    

    return 0;
}
