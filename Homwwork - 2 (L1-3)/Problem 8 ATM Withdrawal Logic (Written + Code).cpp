/*
Name:wilken ortega
Course: CSCI 271
Assignment: Lessons 1–3 Homework
Due Date: 2/25/2026
*/

/*

          Pseudocode
Display "Enter account balance:"
Input balance

Display "Enter withdrawal amount:."
Input withdrawal

IF withdrawal > balance THEN
Display "Insufficient funds."
ELSE IF
balance = balance - withdrawal
Display "New balance is:" balance
*/

#include <iostream>
using namespace std;
int main() {
   double balance {0};
   double with_drawal {0};
   
   
   cout<< "Enter account balance: ";
   cin >> balance ;
   
   cout << "Enter withdrawal amount: ";
   cin >> with_drawal;
   
    if (with_drawal > balance) {
        cout<< endl <<  "Insufficient funds";
        }else if (balance = balance - with_drawal){
            cout << endl << "New balance is: " << balance;
        }
    


    return 0;
}




