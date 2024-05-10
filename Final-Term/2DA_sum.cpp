//Name:MRXVAU
//ID : 24-56434-1
//SERIAL : 28
#include <iostream>
using namespace std;

int main() {
    int row, col;
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> col;

    int MATRIX[row][col];
    int MATRIX1[row][col];
    
    int MATRIX_MUL[row][col];
    int MATRIX_DIV[row][col];


    cout << "\nMATRIX >>>>>>\n>";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Enter the elements of MATRIX[" << i << "][" << j << "]: ";
            cin >> MATRIX[i][j];
        }
    }

    cout << "\nMATRIX1 >>>>>>>\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Enter the value of MATRIX1[" << i << "][" << j << "]: ";
            cin >> MATRIX1[i][j];
        }
    }

    if (row == col) {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                MATRIX_MUL[i][j] = MATRIX[i][j] * MATRIX1[i][j];
            }
        }

        cout << "MATRIX MUL-->" << endl;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cout << "\t" << MATRIX_MUL[i][j];
            }
            cout << endl;
        }
    } else {
        cout << "Row and column dimensions do not match for multiplication.\n";
    }


    if (row == col) {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                 MATRIX_DIV[i][j] = MATRIX[i][j] / MATRIX1[i][j];
            }
        }

        cout << "MATRIX DIVION -->" << endl;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cout << "\t" <<  MATRIX_DIV[i][j];
            }
            cout << endl;
        }
    } else {
        cout << "Row and column dimensions do not match for multiplication.\n";
    }

    return 0;
}