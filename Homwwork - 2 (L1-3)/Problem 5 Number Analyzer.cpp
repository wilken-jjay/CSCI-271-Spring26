/*
Name:wilken ortega
Course: CSCI 271
Assignment: Lessons 1–3 Homework
Due Date: 2/25/2026
*/

#include <iostream>
using namespace std;
int main () {
    int number{0}; 
    
    
     cout << "Enter an integer: ";
    cin >> number;


    if (number > 0) {
        cout << "The number is positive ";
    }else if (number < 0) {
        cout << "The number is negative ";
    }else{
        cout << "The number is zero ";
    }
     if ( number % 2 == 0)  {
        cout << "and even." << endl;
    }else{
        cout <<"and odd." << endl;
    }
    return 0;

}