/*
Name: wilken ortrega 
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: (While Example – Class Average)
Description:This code allows for up to 10 inputs and then is divided by 10 to give an average.
*/

#include <iostream>
using namespace std;
int main()
{
    int total = 0;
    int counter = 1;
    
  while (counter <= 10) {
      int grade;
      cin>> grade;
      total += grade;
      counter++;
  }
    
    double average =
    static_cast <double> (total) /10;
    cout << average;
}

/*
Reflection:
1. What I understood from this program:
 you can use "while" to have multiple inputs instead of adding multiple variables. 
2. Difficulties I faced:
Understanding that static_cast is used to change between data types at the end of your program.
3. What I needed to search or review:
 I need to look at other ways “while” could be implemented, and understand loops better, by looking at lesson 4 slides 
4. AI Usage (if any):
 n/a
5. What I learned:
 That “while” could be used to create loops, and how static_cast could be used to change between data types 
*/