/*
Name: wilken ortrega 
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program:(do...while in action)
Description: this code runs a loop and stops if the condition met
*/

#include <iostream>
using namespace std;
int main() {
    int x = 10;

    do {
    cout << x;   // This prints
    x++;
    } while (x <= 5);
    
}

/*
Reflection:
1. What I understood from this program:
  You can use do while to double check if your condition is met
2. Difficulties I faced:
understanding why it still allows for false conditions 
3. What I needed to search or review:
 review slides || look in the book
4. AI Usage (if any):
 n/a
5. What I learned:
 The loop stops when the condition is met even if it's false 
*/