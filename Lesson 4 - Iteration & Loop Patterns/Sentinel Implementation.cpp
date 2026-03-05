/*
Name: wilken ortrega 
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: (Sentinel Implementation)
Description:This code allows users to input multiple inputs Then get an average of all the inputs that are given.
*/

#include <iostream>
using namespace std;
int main() {
    int total = 0, counter = 0, grade;

    cout << "Enter grade or -1 to quit: ";
    cin >> grade;   // 1. Prime the loop (get first input)

    while (grade != -1) {   // 2. Test the condition
        total += grade;     // 3. Process
        counter++;

        cout << "Enter next grade or -1 to quit: ";
        cin >> grade;       // 4. Update (get next input)
    }

    // Termination Phase: The "Zero-Check"
    if (counter != 0) {
        double average = static_cast<double>(total) / counter;
        cout << "Class average is " << average;
    } else {
        cout << "No grades were entered.";
    }

}

/*
Reflection:
1. What I understood from this program:
   The value you assign to be sentinel must be a value that wouldn't overlap in your inputs Because if it overlaps it can crash the program.
2. Difficulties I faced:
N/a
3. What I needed to search or review:
 I need to look at other ways “while” could be implemented, and understand loops better, by looking at lesson 4 slides 
4. AI Usage (if any):
 n/a
5. What I learned:
that it is good to have a Sentinel value to show the end of your data entry (like a exit)
 */