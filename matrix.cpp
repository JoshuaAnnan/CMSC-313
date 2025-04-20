#include "matrix.h"
#include <iostream>
using namespace std;

Matrix::Matrix(int rows, int cols) {
    this->rows = rows;
    this->cols = cols;
    data = vector<vector<int>>(rows, vector<int>(cols));
}

void Matrix::set(int row, int col, int value) {
    data[row][col] = value;
}

int Matrix::get(int row, int col) const {
    return data[row][col];
}

Matrix Matrix::trans() const {
    Matrix result(cols, rows);
    for (int i = 0; i < rows; ++i){
        for (int j = 0; j < cols; ++j){
            result.set(j, i, data[i][j]);
        }
    }
    return result;
}

Matrix Matrix::operator+(const Matrix& other) const {
    Matrix result(rows, cols);
    for (int i = 0; i < rows; ++i){
        for (int j = 0; j < cols; ++j){
            result.set(i, j, data[i][j] + other.get(i, j));
        }
    }
    return result;
}

Matrix Matrix::operator*(const Matrix& other) const {
    Matrix result(rows, other.cols);
    for (int i = 0; i < rows; ++i){
        for (int j = 0; j < other.cols; ++j){
            for (int k = 0; k < cols; ++k){
                result.data[i][j] += data[i][k] * other.data[k][j];
            }
        }
    }
    return result;
}

Matrix Matrix::operator*(int scalar) const {
    Matrix result(rows, cols);
    for (int i = 0; i < rows; ++i){
        for (int j = 0; j < cols; ++j){
            result.set(i, j, data[i][j] * scalar);
        }
    }
    return result;
}

void Matrix::printMatrix() const {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << data[i][j] << " ";
        }
        cout << "\n";
    }
}