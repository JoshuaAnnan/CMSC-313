#include "matrix.h"
#include <stdio.h>

void makeMatrix(Matrix* m, int rows, int cols) {
    m->rows = rows;
    m->cols = cols;
    for (int i = 0; i < rows; ++i){
        for (int j = 0; j < cols; ++j){
            m->data[i][j] = 0;
        }
    }
}

void set(Matrix* m, int row, int col, int value) {
    m->data[row][col] = value;
}

int get(const Matrix* m, int row, int col) {
    return m->data[row][col];
}

void trans(const Matrix* m, Matrix* result) {
    makeMatrix(result, m->cols, m->rows);
    for (int i = 0; i < m->rows; ++i){
        for (int j = 0; j < m->cols; ++j){
            result->data[j][i] = m->data[i][j];
        }
    }
}

void add(const Matrix* a, const Matrix* b, Matrix* result) {
    makeMatrix(result, a->rows, a->cols);
    for (int i = 0; i < a->rows; ++i){
        for (int j = 0; j < a->cols; ++j){
            result->data[i][j] = a->data[i][j] + b->data[i][j];
        }
    }
}

void multi(const Matrix* a, const Matrix* b, Matrix* result) {
    makeMatrix(result, a->rows, b->cols);
    for (int i = 0; i < a->rows; ++i){
        for (int j = 0; j < b->cols; ++j){
            for (int k = 0; k < a->cols; ++k){
                result->data[i][j] += a->data[i][k] * b->data[k][j];
            }
        }
    }
}

void scalarMulti(const Matrix* m, int scalar, Matrix* result) {
    makeMatrix(result, m->rows, m->cols);
    for (int i = 0; i < m->rows; ++i){
        for (int j = 0; j < m->cols; ++j){
            result->data[i][j] = m->data[i][j] * scalar;
        }
    }
}

void printMatrix(const Matrix* m) {
    for (int i = 0; i < m->rows; ++i) {
        for (int j = 0; j < m->cols; ++j) {
            printf("%d ", m->data[i][j]);
        }
        printf("\n");
    }
}
