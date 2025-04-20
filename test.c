#include "matrix.h"

int main() {
    Matrix A;
    Matrix B;
    Matrix C;
    Matrix threeB;
    Matrix CT;
    Matrix product;
    Matrix result;

    makeMatrix(&A, 2, 2);
    set(&A, 0, 0, 6); 
    set(&A, 0, 1, 4);
    set(&A, 1, 0, 8); 
    set(&A, 1, 1, 3);

    makeMatrix(&B, 2, 3);
    set(&B, 0, 0, 1); 
    set(&B, 0, 1, 2); 
    set(&B, 0, 2, 3);
    set(&B, 1, 0, 4); 
    set(&B, 1, 1, 5); 
    set(&B, 1, 2, 6);

    makeMatrix(&C, 2, 3);
    set(&C, 0, 0, 2); 
    set(&C, 0, 1, 4); 
    set(&C, 0, 2, 6);
    set(&C, 1, 0, 1); 
    set(&C, 1, 1, 3); 
    set(&C, 1, 2, 5);

    scalarMulti(&B, 3, &threeB);
    trans(&C, &CT);
    multi(&threeB, &CT, &product);
    add(&A, &product, &result);

    printMatrix(&result);
    return 0;
}
