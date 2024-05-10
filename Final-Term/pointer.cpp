//Name:MRXVAU
//ID : 24-56434-1
//SERIAL : 28

#include<iostream>

using namespace std;

int main(){
    
    int num,num2;
    cout<<"Enter the integar value of the pointer :";
    cin>>num;

    int *x;
    x = &num;

    


    cout<<"\nThe address of num is "<<num<<endl;
    cout<<"The value of num is "<<*x<<endl;
    cout<<"The address of x is "<<&num<<endl;
    cout<<"The address of x is "<<&x<<endl;

    cout<<endl;
    cout<<"Enter the value of the new num :";
    cin>>num2;
    *x = num2;
    cout<<"the value of the new num "<<num<<endl;
    }