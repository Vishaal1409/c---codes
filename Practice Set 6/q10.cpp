#include <iostream>
const int SIZE = 2;
class Matrix {
private:
    int mat[SIZE][SIZE];
public:
    Matrix() {
        for (int i = 0; i < SIZE; ++i) {
            for (int j = 0; j < SIZE; ++j) {
                mat[i][j] = 0;
            }
        }
    }
    void setElement(int row, int col, int value) {
        if (row >= 0 && row < SIZE && col >= 0 && col < SIZE) {
            mat[row][col] = value;
        }
    }
    void display() const {
        for (int i = 0; i < SIZE; ++i) {
            for (int j = 0; j < SIZE; ++j) {
                std::cout << mat[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
    friend Matrix addMatrices(const Matrix& m1, const Matrix& m2);
};
Matrix addMatrices(const Matrix& m1, const Matrix& m2) {
    Matrix result;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            result.mat[i][j] = m1.mat[i][j] + m2.mat[i][j];
        }
    }
    return result;
}
int main() {
    Matrix m1, m2;
    m1.setElement(0, 0, 1); m1.setElement(0, 1, 2);
    m1.setElement(1, 0, 3); m1.setElement(1, 1, 4);
    m2.setElement(0, 0, 5); m2.setElement(0, 1, 6);
    m2.setElement(1, 0, 7); m2.setElement(1, 1, 8);
    std::cout << "Matrix 1:" << std::endl;
    m1.display();
    std::cout << "\nMatrix 2:" << std::endl;
    m2.display();
    Matrix sum = addMatrices(m1, m2);
    std::cout << "\nSum of matrices:" << std::endl;
    sum.display();
    return 0;
}