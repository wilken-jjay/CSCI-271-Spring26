/*
Name: wilken ortrega 
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: (Summing Even Numbers)
Description:This code adds all even numbers from 2 to 20 
*/

#include <iostream>
using namespace std;
int main() {
    
    int sum = 0;
    
    for (int i = 2; i <=20; i += 2){
        sum +=i; // adds 2.4.6 ....
    }
    cout <<"sum is " << sum;

}



/*
Reflection:
1. What I understood from this program:
 this code will end at 20 values and is counting by 2
2. Difficulties I faced:
I didnt have any difficulties with this one
3. What I needed to search or review:
 review slides || look in the book
4. AI Usage (if any):
 n/a
5. What I learned:
you assign the progression value towards the end of the parentheses using + for the loop 
*/