/*
Name:wilken ortega
Course: CSCI 271
Assignment: Lessons 1–3 Homework
Due Date: 2/25/2026
*/
#include <iostream>
#include <iomanip> // had to use ai to explain why I need this
using namespace std;
int main() {
    double grade1 {0};
    double grade2 {0};
    double grade3 {0};
    double average_grade {0};
    
    cout<< "enter 3 course grades: ";
    cin >> grade1 >> grade2 >> grade3;
    
    average_grade = ( grade1 + grade2 + grade3 ) /3 ;
    
    
    cout << "Average GPA: " << setprecision(3) << average_grade;
    
    
    
    return 0;
}