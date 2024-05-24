#include <iostream>

double calculatePercentage(int part, int whole) {
    float sum = float(part) / float(whole)*100;  // advance >> return (static_cast<double>(part) / whole) * 100.0;
 
    return sum;
}

int main() {
    int part = 25;  // Number of correct answers
    int whole = 30; // Total number of questions

    double percentage = calculatePercentage(part, whole);

    std::cout << "Percentage: " << percentage << "%" << std::endl;

    return 0;
}
