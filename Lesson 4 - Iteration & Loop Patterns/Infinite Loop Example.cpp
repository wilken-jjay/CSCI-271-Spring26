/*
Name: wilken ortrega 
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program:(Infinite Loop Example)
Description: this code shows how Infinite loops work and how to pervent them.
*/

#include <iostream>
using namespace std;
int main() {
    
    /*
     int x = 1;
    
    while (x<=5){
        cout << x;
     }
    */ 
    
    int x = 1;
    
    while (x<=5){
        cout << x << " ";
        // the essenetal update statement.
        x++;
    }

}


/*
Reflection:
1. What I understood from this program:
  I understood x++ is an update statement
2. Difficulties I faced:
I didnt have any difficulties with this one
Understanding that static_cast is used to change between data types at the end of your program.
3. What I needed to search or review:
 review slides || look in the book
4. AI Usage (if any):
 n/a
5. What I learned:
 I learned that to not have an Infinite loop one must add an update statement. 
*/