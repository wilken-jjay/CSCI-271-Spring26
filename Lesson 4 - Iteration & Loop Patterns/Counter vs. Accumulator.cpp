/*
Name: wilken ortrega 
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program:(Counter vs. Accumulator)
Description: Adding One vs. Adding Many
*/

#include <iostream>
using namespace std;
int main() {
    //Counter Pattern
    int count = 0;

    for (int i = 0; i < 10; i++)
    count++;
    
    
    /*
        Accumulator Pattern
    int sum = 0;

    for (int i = 1; i <= 5; i++)
    sum += i;
    
    */
    
}


/*
Reflection:
1. What I understood from this program:
  the counter pattern continuously goes up by one in the loop 
  The accumulator pattern continually goes up following the loop's input 
2. Difficulties I faced:
I didnt have any difficulties with this one
0 difficulties
3. What I needed to search or review:
 review slides || look in the book
4. AI Usage (if any):
 n/a
5. What I learned:
  I should use the counter pattern when I have a set value to reach 
 Use the accumulator pattern when I need a total from my inputs
*/