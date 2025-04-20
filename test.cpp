#include "matrix.h"

int main() {
    Matrix A(2, 2);
    A.set(0, 0, 6); 
    A.set(0, 1, 4);
    A.set(1, 0, 8); 
    A.set(1, 1, 3);

    Matrix B(2, 3);
    B.set(0, 0, 1); 
    B.set(0, 1, 2); 
    B.set(0, 2, 3);
    B.set(1, 0, 4); 
    B.set(1, 1, 5); 
    B.set(1, 2, 6);

    Matrix C(2, 3);
    C.set(0, 0, 2); 
    C.set(0, 1, 4); 
    C.set(0, 2, 6);
    C.set(1, 0, 1); 
    C.set(1, 1, 3); 
    C.set(1, 2, 5);

    Matrix result = A + (B * 3) * C.trans();

    result.printMatrix();
    return 0;
}