//Name: MRXVAU
//ID : 24-56434-1
//SERIAL : 28
#include <iostream>
using namespace std;

class Rectangle {
public:
    int length;
    int width;
};

int main() {
    Rectangle rect;
    rect.length = 5;
    rect.width = 4;
    cout << "Length: " << rect.length << endl;
    cout << "Width: " << rect.width << endl;
    return 0;
}
