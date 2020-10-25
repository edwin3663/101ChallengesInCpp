/** Determine if the integers in an array follow
    a geometric or an arithmetic progression.

    @file chall14.cpp
    @author Peter Saffold
    @date 10/25/2020
*/
#include <iostream>
#include <cstdlib>

bool isArithmeticProgression(int *A, int len);
bool isGeometricProgression(int *A, int len);


int main(int argc, char* argv[]) {
    if (argc > 2) {
        int size = argc - 1;
        int *A = new int(size);
    
        for (int i = 0; i < size; i++) {
            A[i] = atoi(argv[i+1]);
        }
        
        if (isGeometricProgression(A, size)) {
            std::cout << "Geometic Progression" << std::endl;
        }

        if (isArithmeticProgression(A, size)) {
            std::cout << "Arithmetic Progression" << std::endl;
        }
    }

    return 0;
}

bool isArithmeticProgression(int *A, int len) {
    int diff = A[1] - A[0];
    for (int i = 1; i < len; i++) {
        if (A[i] - A[i-1] != diff) {
            return false;
        }
    }
    return true;
}

bool isGeometricProgression(int *A, int len) {

    for (int i = 0; i < len; i++) {
        if (A[i] == 0) {
            return false;
        }
    }
    double ratio = (double)A[1] / (double)A[0];
    for (int i = 1; i < len; i++) {
        if ((double)A[i] / (double)A[i-1] != ratio) {
            return false;
        }
    }
    return true;
}
