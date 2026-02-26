/*
Name:wilken ortega
Course: CSCI 271
Assignment: Lessons 1–3 Homework
Due Date: 2/25/2026
*/
#include <iostream>
using namespace std;
int main() {
    
    int student_grade {0};
    
    cout << "input numeric grade (0–100) ";
    cin >> student_grade;
    
    
    if (student_grade >= 101) {
        cout << "Invalid grade entered";
    }else if (student_grade >= 90) {
        cout << "A";
    }else if (student_grade >= 80) {
        cout << "B";
    }else if (student_grade >= 70) {
        cout << "C";
    }else if (student_grade >= 60) {
        cout << "D";
    }else if (student_grade >= 0) {
        cout << "F";
    }else if (student_grade <= -1) {
        cout << "Invalid grade entered";
    }
        
    
    
}
    
    