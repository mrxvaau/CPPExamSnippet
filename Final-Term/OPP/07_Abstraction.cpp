//Name: MRXVAU
//ID : 24-56434-1
//SERIAL : 28

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() {
        cout << "Drawing Rectangle" << endl;
    }
};

int main() {
    Circle c;
    Rectangle r;

    c.draw();
    r.draw();

    return 0;
}
