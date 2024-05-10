//Name:MRXVAU
//ID : 24-56434-1
//SERIAL : 28

#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int *ptr;
    ptr = &num;


    cout << "Initial value of num: " << num <<endl;
    cout << "Initial value of &num: " << &num <<endl;
    cout << "Initial value of ptr: " << ptr <<endl;
    

    cout << "Initial value of num: " << *ptr <<endl;
    cout<<  (*ptr)++; 
    cout << "After incrementing, num is: " << *ptr <<endl;

    cout<< (*ptr)--; 
    cout << "After decrementing, num is: " << *ptr <<endl;

    ++(*ptr);
    cout << "After pre-incrementing, num is: " << *ptr <<endl;

    --(*ptr);
    cout << "After pre-decrementing, num is: " << *ptr <<endl;

        return 0;
}
