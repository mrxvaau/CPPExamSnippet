#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
    string occupation;
};

int main() {
    Person person1, person2;
    
    person1.name = "John";
    person1.age = 30;
    person1.occupation = "Engineer";
    
    cout << "Enter the name: ";
    cin >> person2.name;
    cout << "Enter the age: ";
    cin >> person2.age;
    cout << "Enter the occupation: ";
    cin >> person2.occupation;
    
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Occupation: " << person1.occupation << endl;
    
    cout << "Name: " << person2.name << endl;
    cout << "Age: " << person2.age << endl;
    cout << "Occupation: " << person2.occupation << endl;
    
    return 0;
}