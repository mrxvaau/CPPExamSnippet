//Name:MRXVAU
//ID : 24-56434-1
//SERIAL : 28

/*You are tasked with developing an interactive feature for a mathematics tutoring website that demonstrates the concept of factorial, crucial for understanding permutations and combinations.
 Your assignment is to write a C++ program that includes a function named Factorial to compute the factorial of a number n (the product of all positive integers up to n). The program should prompt the user to 
 input a positive integer, handle input errors like negative numbers or non-numeric inputs gracefully, and upon calculating the factorial, display the result along with an explanation of the factorial concept 
 and its mathematical uses.*/

#include <iostream>
using namespace std;

int Factorial(int x) {
    if (x == 0 || x == 1)
        return 1;
    else
        return x * Factorial(x - 1);   // Siir  can do this by loop but i tried somthing different:D
}

void printFACT(int num) {
    cout << "\nFactorial of " << num << " is: " << Factorial(num) << endl;
    cout << "Factorial is the product of all positive integers up to " << num << "." << endl;
    cout << "It is crucial for understanding permutations and combinations in mathematics." << endl;
}

void ErrorHandling() {
    int num;
    cout << "Enter a non-negative integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Negative integer entered!" << endl;
        ErrorHandling();
    }

    else if (num > 0) {
        printFACT(num);
    }
    
    else {
        cout << "invilad data_type entered!" << endl;
        ErrorHandling();
    }
}

int main() {
    ErrorHandling();
    return 0;
}
