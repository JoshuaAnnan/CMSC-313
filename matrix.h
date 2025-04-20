#ifndef MATRIX_H
#define MATRIX_H
#define MAX_ROWS 10
#define MAX_COLS 10

typedef struct {
    int rows;
    int cols;
    int data[MAX_ROWS][MAX_COLS];
} Matrix;

void makeMatrix(Matrix* m, int rows, int cols);
void set(Matrix* m, int row, int col, int value);
int get(const Matrix* m, int row, int col);
void trans(const Matrix* m, Matrix* result);
void add(const Matrix* a, const Matrix* b, Matrix* result);
void multi(const Matrix* a, const Matrix* b, Matrix* result);
void scalarMulti(const Matrix* m, int scalar, Matrix* result);
void printMatrix(const Matrix* m);

#endif