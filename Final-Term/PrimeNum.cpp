//Name:MRXVAU
//ID : 24-56434-1
//SERIAL : 28

/*Imagine you are tasked with developing an educational module for high school students exploring number theory as part of an educational software suite. 
This module is designed to efficiently teach the concepts of identifying a single prime number and listing all prime numbers within a specified range, 
\enhancing students' understanding of prime numbers through interactive learning. Your assignment is to create a C++ program that includes a function 
named isPrime to check if a number is prime, and another function named displayPrimes to print all prime numbers between two given intervals. 
The main() function should allow users to choose between checking the primality of a single number or displaying all prime numbers within a specified range, 
prompting for a single number or two interval-defining numbers accordingly, and executing the relevant function based on the user's choice. 
This hands-on tool aims to provide a comprehensive learning experience by allowing students to engage directly with the material through practical application 
and verification of mathematical theories.*/

#include<iostream>
using namespace std;

bool isPrime(int num){
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++){
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void displayPrimes(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            cout << i << ",";
        }
    }
    cout << endl;
}

void ROOT(){
    int choice;
    cout << "1. Check if a number is prime"
    <<"\n2. Display num two given intervals"
    <<"\nChoose >> ";
    cin >> choice;

    if (choice == 1) {
        int num;
        cout << "Enter a number to check if it is prime: ";
        cin >> num;
        if (isPrime(num)) {
            cout << num << " is a prime number.\n";
        } else {
            cout << num << " is not a prime number.\n";
        }
    } else if (choice == 2) {
        int start, end;
        cout << "Enter the start of the interval: ";
        cin >> start;
        cout << "Enter the end of the interval: ";
        cin >> end;
        cout << "Prime numbers within the interval : ";
        displayPrimes(start, end);
    } else {
        cout << "Invalid choice. Please try again........:(\n";
    }

}


int main() {

    ROOT();
    
    return 0;
}