//Name: MRXVAU
//ID : 24-56434-1
//SERIAL : 28

/*Imagine you are developing a feature for a university student portal where students can enter their semester marks for their taken subjects along with the subject name, 
each out of 100, and calculate their Cumulative Grade Point Average (CGPA). Your task is to write a C++ program that prompts students for these marks, calculates the CGPA
 using a simplified grading system (A+ = 4.0 for 85-100 marks, A = 3.75 for 70-84, B+ = 3.5 for 55-69, B = 3.0 for 40-54, F = 0.0 for marks below 40), and defines a function 
 named displayGrade to output grades corresponding to the marks.*/

#include <iostream>
#include <string>

using namespace std;
void lineBREAK(){
    cout << endl;
}

double calculateCGPA(int X) {
    if(X >= 85)
    {
        return 4.0;
    } 
    else if(X >= 70)
    {
        return 3.75;
    } 
    else if(X >= 55)
    {
        return 3.5;
    } 
    else if(X >= 40) 
    {
        return 3.0;
    } 
    else 
    {
        return 0.0;
    }
}

string displayGrade(double x) {
    if(x >= 4.0) 
    {
        return "A+";
    } 
    else if(x >= 3.75) 
    {
        return "A";
    } 
    else if(x >= 3.5) 
    {
        return "B+";
    } 
    else if(x >= 3.0) 
    {
        return "B";
    } 
    else 
    {
        return "F";
    }
}

void mainTask(){
     int count;

    cout << "How many subjects do you have? " << endl;
    cout << ">>> ";
    cin >> count;

    string subject[count];
    int mark[count];


    for(int i = 0; i < count; i++) {
        cout << "[" << i+1 << "] Enter the subject name : ";
        cin >> subject[i];
    }

    lineBREAK();


    for(int i = 0; i < count; i++)
    {
        cout << "[+] Enter the mark of " << subject[i] << " : ";
        cin >> mark[i];
        
        while (mark[i] > 100) {
            cout << "Invalid marks! Please enter again: ";
            cin >> mark[i];
        }
    }


    float total_CGPA = 0.0;

    for(int i = 0; i < count; i++) {
        total_CGPA = total_CGPA + calculateCGPA(mark[i]);
    }

    lineBREAK();
    for(int i = 0; i < count; i++) {
        cout << "[" << i+1 << "] You have got on " << subject[i] << " : " << calculateCGPA(mark[i]) << " (" << displayGrade(calculateCGPA(mark[i])) << ")" << endl;
    }

    float averageCGPA = total_CGPA / count;
    lineBREAK();
    cout << "Your Total CGPA : " << averageCGPA << " (" << displayGrade(averageCGPA) << ")" << endl;
    lineBREAK();
}



int main() {
    mainTask();
    return 0;
}