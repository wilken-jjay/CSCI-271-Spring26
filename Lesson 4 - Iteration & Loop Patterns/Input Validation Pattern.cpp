/*
Name: wilken ortrega 
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program:(The "Gatekeeper" Loop)
Description: this code makes users input realistic answers then runs the rest of the program
*/

#include <iostream>
using namespace std;
int main(){
    int age;

cout << "Enter age (1-120): ";
cin >> age;

// This loop only runs IF the data is bad
while (age < 1 || age > 120) {
    cout << "Invalid. Please enter a realistic age: ";
    cin >> age;
}
    
}

/*
Reflection:
1. What I understood from this program:
 it only allows for real answers
2. Difficulties I faced:
no Difficulties
3. What I needed to search or review:
 review slides || look in the book
4. AI Usage (if any):
 n/a
5. What I learned:
 how to use or statements within while loops 
*/