//Name:MRXVAU
//ID : 24-56434-1
//SERIAL : 28

#include <iostream>
using namespace std;

void inputArray(int array[], int size) {
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }
}

double calculateAverage(int array[], int size) {
    double sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }
    return sum / size;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int array[size];
    inputArray(array, size);
    double average = calculateAverage(array, size);
    cout << "Average of the elements: " << average << endl;
    return 0;
}