/*
Name:wilken ortega
Course: CSCI 271
Assignment: Lessons 1–3 Homework
Due Date:2/25/26
*/

#include <iostream>
using namespace std;

int main (){
    
    string fist_name;
    string last_name;
    string major;
    string expected_graduation_year;
    
    cout << "give first name: ";
    cin >> fist_name;
    
    cout << "give last name: ";
    cin >> last_name;
    
    cout << "give major: ";
    cin >> major;
    
    cout << "give expected graduation year: ";
    cin >> expected_graduation_year;
    
    cout << endl << "Welcome, " <<  fist_name << " " << last_name << "!" << endl ;
    cout << "Major: " << major << endl ;
    cout << "Expected Graduation Year: " << expected_graduation_year;
    
    
    return 0;
}