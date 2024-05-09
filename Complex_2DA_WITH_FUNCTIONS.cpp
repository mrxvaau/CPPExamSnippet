//Name: MD. Momen Sha
//ID : 24-56434-1
//SERIAL : 28

/*You are developing a software module for a computer graphics design application that manipulates image layers using matrix operations. Your task is to create a program that initializes two 2D array matrices 
of the same size, representing different image layers. The program should display the rows and columns of each array, and perform matrix addition, subtraction, and multiplication on these matrices to simulate 
blending and effect application between the layers. Finally, the program should output the resulting matrices to demonstrate the combined effects, helping designers visualize the changes and refine their graphic
 compositions. This feature is crucial for artists who rely on precise matrix manipulations to achieve desired visual outcomes in their digital artwork.*/


#include <iostream>
#include <string>
using namespace std;

void inputMATRIX(int M[][2], int size, string mm) {
    cout << mm;
    for(int loop_row = 0; loop_row < size; loop_row++) {
        for(int loop_col = 0; loop_col < size; loop_col++) {
            cout << "Enter the Array elements : [" << loop_row << "][" << loop_col << "]: ";
            cin >> M[loop_row][loop_col];
        }
    }
}

void matrixCALCULATION(int M1[][2], int M2[][2], int result[][2], int size, char op) {
    for(int loop_row = 0; loop_row < size; loop_row++) {
        for(int loop_col = 0; loop_col < size; loop_col++) {
            if(op == '+')
                result[loop_row][loop_col] = M1[loop_row][loop_col] + M2[loop_row][loop_col];
            else if(op == '-')
                result[loop_row][loop_col] = M1[loop_row][loop_col] - M2[loop_row][loop_col];
            else if(op == '*')
                result[loop_row][loop_col] = M1[loop_row][loop_col] * M2[loop_row][loop_col];
        }
    }
}

void outputMATRIX(int M[][2], int size, string mm) {
    cout << mm << endl;
    for(int loop_row = 0; loop_row < size; loop_row++) {
        for(int loop_col = 0; loop_col < size; loop_col++) {
            cout << "\t" << M[loop_row][loop_col];
        }
        cout << endl; 
    }
}

void ROOT(){

    int size;
    cout << "Enter the image layer size : ";
    cin >> size;

    int M1[size][2];
    int M2[size][2];

    int sumADD[size][2];
    int sumSUB[size][2];
    int sumMUL[size][2];

    string mm = "\nTHE 1ST MATRIX -->\n";
    string nn = "\nTHE 2nd MATRIX -->\n";
    
    inputMATRIX(M1, size, mm);
    inputMATRIX(M2, size, nn);
    
    outputMATRIX(M1, size, mm);
    outputMATRIX(M2, size, nn);

    matrixCALCULATION(M1, M2, sumADD, size, '+');
    matrixCALCULATION(M1, M2, sumSUB, size, '-');
    matrixCALCULATION(M1, M2, sumMUL, size, '*');

    string add = "\nTHE ADDITION -->\n";
    string sub = "\nTHE SUBTRACTION -->\n";
    string mul = "\nTHE MULTIPICATION -->\n";

    outputMATRIX(sumADD, size, add);
    outputMATRIX(sumSUB, size, sub);
    outputMATRIX(sumMUL, size, mul);
}

int main() {

    ROOT();
    return 0;
}
