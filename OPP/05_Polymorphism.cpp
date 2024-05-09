//Name: MRXVAU
//ID : 24-56434-1
//SERIAL : 28
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Dog d;
    d.sound();

    Animal a;
    a.sound();

    return 0;
}
