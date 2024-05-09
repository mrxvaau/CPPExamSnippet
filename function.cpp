#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int num1, num2;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    int sum;
    sum = add(num1, num2);
    int product;
    product = multiply(num1, num2);
    int difference;
    difference = (num1, num2);
    
    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
    cout << "Difference: " << difference << endl;
    
    return 0;
}