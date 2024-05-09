#include <iostream>
using namespace std;

class Rectangle {
    int length;
    int width;

public:
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    int area() {
        return length * width;
    }

    int perimeter() {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle rect(5, 4);
    cout << "Area: " << rect.area() << endl;
    cout << "Perimeter: " << rect.perimeter() << endl;
    return 0;
}
