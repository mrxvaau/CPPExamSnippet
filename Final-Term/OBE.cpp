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

void MAIN(){
    int choice;
    cout << "[1] Singal number primality"
    <<"\n[2] Display the range prime"
    <<"\n[+] Choose >> ";
    cin >> choice;

    if (choice == 1) {
        int num;
        cout << "Enter a number : ";
        cin >> num;
        if (isPrime(num)) {
            cout << num << " is a prime number.\n";
        } else {
            cout << num << " is not a prime number.\n";
        }
    } else if (choice == 2) {
        int start, end;
        cout << "Enter the start of the start: ";
        cin >> start;
        cout << "Enter the end of the end: ";
        cin >> end;
        cout << "Prime numbers within the range : ";
        displayPrimes(start, end);
    } else {
        cout << "Invalid choice. Please try again\n";
    }



}

int main(){

    MAIN();
    return 0;
}