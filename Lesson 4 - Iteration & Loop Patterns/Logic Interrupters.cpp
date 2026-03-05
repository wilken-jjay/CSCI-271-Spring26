/*
Name: wilken ortrega 
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program:(The "Emergency Exit" vs. The "Skip")
Description: this code shows how continue and break works in a loop 
*/

#include <iostream>
using namespace std;
int main() {
    
    for (int i = 1; i <= 10; i++) {

    if (i == 3) {
        continue;   // Skip the rest of this iteration
    }

    if (i == 6) {
        break;      // Exit the loop entirely
    }

    cout << i << " ";
}

// Output: 1 2 4 5
    
}

/*
Reflection:
1. What I understood from this program:
  It's good to have an exit and a skip in a Loop 
2. Difficulties I faced:
no difficulties
3. What I needed to search or review:
 review slides || look in the book
4. AI Usage (if any):
 n/a
5. What I learned:
  how to add a skip and a break to a loop
*/