//Name:MRXVAU
//ID : 24-56434-1
//SERIAL : 28

#include<iostream>
using namespace std;

int main() {

    int row, col;
    cout << "Enter the number of rows of the matrix: ";
    cin >> row;
    cout << "Enter the number of columns of the matrix: ";
    cin >> col;

    int MATRIX[row][col];
    int MATRIX2[row][col];       
    int RESULTS[row][col];

    cout<<"THE 1ST MATRIX -->\n";

    for(int loop_row = 0; loop_row < row; loop_row++){
        for(int loop_col = 0; loop_col < col; loop_col++){
            cout<<"Enter the Array elements : ["<<loop_row<<"]["<<loop_col<<"]: ";
            cin >> MATRIX[loop_row][loop_col]; // Store user input into MATRIX
        }
    }

    cout<<"THE 2ND MATRIX -->\n";

    for(int loop_row = 0; loop_row < row; loop_row++){
        for(int loop_col = 0; loop_col < col; loop_col++){
            cout<<"Enter the Array elements : ["<<loop_row<<"]["<<loop_col<<"]: ";
            cin >> MATRIX2[loop_row][loop_col]; // Store user input into MATRIX2
        }
    }


    // Addition of matrix
    for(int loop_row = 0; loop_row < row; loop_row++){
        for(int loop_col = 0; loop_col < col; loop_col++){
            RESULTS[loop_row][loop_col] = MATRIX[loop_row][loop_col] + MATRIX2[loop_row][loop_col];
        }
    }

    // Output the result matrix
    cout << "THE RESULTANT MATRIX -->" << endl;
    for(int loop_row = 0; loop_row < row; loop_row++){
        for(int loop_col = 0; loop_col < col; loop_col++){
            cout<<"\t"<<RESULTS[loop_row][loop_col];
        }
        cout << endl; // Add a newline after each row for better readability
    }

    return 0;
}