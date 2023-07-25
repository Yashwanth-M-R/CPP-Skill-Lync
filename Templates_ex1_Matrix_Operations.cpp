#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void input(vector<vector<T>>& matrix, int rows, int cols) {
    cout << "Enter matrix elements:" << endl;
    for (int i = 0; i < rows; ++i) {
        matrix.push_back(vector<T>());
        for (int j = 0; j < cols; ++j) {
            T element;
            cin >> element;
            matrix[i].push_back(element);
        }
    }
}

template <typename T>
void display(vector<vector<T>>& matrix) {
    for (const auto& row : matrix) {
        for (const T& element : row) {
            cout << element << " ";
        }
        cout << endl;
    }
}

template <typename T>
vector<vector<T>> Addition(vector<vector<T>>& mat1, vector<vector<T>>& mat2) {


    int rows1 = mat1.size();
    int cols1 = mat1[0].size();
    int rows2 = mat2.size();
    int cols2 = mat2[0].size();

    if(rows1 != rows2 && cols1 != cols2){
        cout<<"Matrix Addition Not possible!"<<endl;
    }

    else{
        vector<vector<T>> result(rows1, vector<T>(cols1));
        for (int i = 0; i < rows1; ++i) {
            for (int j = 0; j < cols1; ++j) {
                result[i][j] = mat1[i][j] + mat2[i][j];
            }
        }
        return result;
    }
}

template <typename T>
vector<vector<T>> Subtraction(vector<vector<T>>& mat1, vector<vector<T>>& mat2) {

    int rows1 = mat1.size();
    int cols1 = mat1[0].size();
    int rows2 = mat2.size();
    int cols2 = mat2[0].size();

    if(rows1 != rows2 || cols1 != cols2){
        cout<<"Matrix Addition Not possible!"<<endl;
    }

    else{
        vector<vector<T>> result(rows1, vector<T>(cols1));
        for (int i = 0; i < rows1; ++i) {
            for (int j = 0; j < cols1; ++j) {
                result[i][j] = mat1[i][j] - mat2[i][j];
            }
        }
        return result;
    }
}

template <typename T>
vector<vector<T>> Multiplication(vector<vector<T>>& mat1,vector<vector<T>>& mat2) {
    int rows1 = mat1.size();
    int cols1 = mat1[0].size();
    int rows2 = mat2.size();
    int cols2 = mat2[0].size();

    if (rows1 != rows2 || cols1 != cols2) {
        cout << "Matrix multiplication is not possible. The number of columns of the first matrix must be equal to the number of rows of the second matrix." << endl;
        return vector<vector<T>>();
    }

    vector<vector<T>> result(rows1, vector<T>(cols2));

    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            T sum = static_cast<T>(0);
            for (int k = 0; k < cols1; ++k) {
                sum += mat1[i][k] * mat2[k][j];
            }
            result[i][j] = sum;
        }
    }

    return result;
}

int main() {
    int rows, cols;

    cout << "Enter the number of rows and cols for the first matrix: ";
    cin >> rows >> cols;

    vector<vector<int>> matrix1;
    input(matrix1, rows, cols);

    cout << "Enter the number of rows and cols for the second matrix: ";
    cin >> rows >> cols;

    vector<vector<int>> matrix2;
    input(matrix2, rows, cols);

    // Display the input matrices
    cout << "Matrix 1:" << endl;
    display(matrix1);

    cout << "Matrix 2:" << endl;
    display(matrix2);

    char operation;
    cout << "Enter the operation you want to perform (+, -, *): ";
    cin >> operation;

    vector<vector<int>> result;
    switch (operation) {
        case '+':
            result = Addition(matrix1, matrix2);
            break;
        case '-':
            result = Subtraction(matrix1, matrix2);
            break;
        case '*':
            result = Multiplication(matrix1, matrix2);
            break;
        default:
            cerr << "Invalid operation selected." << endl;
            return 1;
    }

    cout << "Result:" << endl;
    display(result);

    return 0;
}
