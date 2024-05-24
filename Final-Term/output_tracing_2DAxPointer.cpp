#include <iostream>

int main() {
    int arr[] = {10, 20, 30, 40};
    int *pa = arr;

    std::cout << "Value at pa: " << *pa << std::endl; // Output: Value at pa: 10
    std::cout << "Value at (pa + 1): " << *(pa + 3) << std::endl; // Output: Value at (pa + 1): 40
    std::cout << "Value at (pa + 1): " << (*pa + 3) << std::endl; // Output: Value at (pa + 1): 13

    return 0;
}
