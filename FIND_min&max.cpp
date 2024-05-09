//Name: MRXVAU
//ID : 24-56434-1
//SERIAL : 28
/*For a sports analytics app, write a program that initializes an array with the number of goals scored in ten different matches, 
then find and print the smallest and largest numbers of goals scored using functions findMin and findMax.*/

#include<iostream>
using namespace std;

int matches[10];

void userInput(){

    for(int i = 0;i < 10 ; i++){
        cout<<"Match "<<i+1<<" >> Enetr the goal amount : ";
        cin>>matches[i];
    }

}

void  findMin(){
    int min = matches[0];
    for(int i = 0;i < 10 ; i++){
        if(matches[i] < min){
            min = matches[i];
        }
    }
    cout<<"\nSmallest numbers of goals scored : "<<min<<endl;

}

void findMax(){
    int max = matches[0];
    for(int i = 0;i < 10 ; i++){
        if(matches[i] > max){
            max = matches[i];
        }
    }
    cout<<"\nLargest numbers of goals scored : "<<max<<endl;
}



int main(){
  
    userInput();
    findMax();
    findMin();

    return 0;
}