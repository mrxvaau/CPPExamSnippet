#include <iostream>
using namespace std;

void performOperation(int num1, int num2) {
    cout << "The sum of " << num1 << " and " << num2 << " is: " << (num1 + num2) << endl;
    cout << "The difference of " << num1 << " and " << num2 << " is: " << (num1 - num2) << endl;
    cout << "The product of " << num1 << " and " << num2 << " is: " << (num1 * num2) << endl;
    cout << "The division of " << num1 << " by " << num2 << " is: " << (static_cast<float>(num1) / num2) << endl;
}

int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    performOperation(num1, num2);
    return 0;
}
