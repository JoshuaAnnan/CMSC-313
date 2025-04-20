#ifndef MATRIX_H
#define MATRIX_H

#include <vector>
using namespace std;

class Matrix {
public:
    Matrix(int rows, int cols);
    void set(int row, int col, int value);
    int get(int row, int col) const;

    Matrix trans() const;
    Matrix operator+(const Matrix& other) const;
    Matrix operator*(const Matrix& other) const;
    Matrix operator*(int scalar) const;

    void printMatrix() const;

private:
    int rows, cols;
    vector<vector<int>> data;
};

#endif
