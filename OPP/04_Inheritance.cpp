//Name: MRXVAU
//ID : 24-56434-1
//SERIAL : 28
#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base class show function" << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Derived class display function" << endl;
    }
};

int main() {
    Derived d;
    d.show();
    d.display();
    return 0;
}
