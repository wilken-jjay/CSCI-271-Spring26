/*
Name:wilken ortega
Course: CSCI 271
Assignment: Lessons 1–3 Homework
Due Date: 2/25/2026
*/

#include <iostream>
using namespace std;

int main () {
    
    double Total_bill_amount {0};
    double Tip_percentage {0};
    double Number_of_people {0};
    
    cout << "total bill: ";
    cin >> Total_bill_amount;
    
    cout << "tip percentage: ";
    cin >> Tip_percentage;
    
    cout << "Number of people: ";
    cin >> Number_of_people;
    
    cout << endl << "tip amount: " << (Tip_percentage / 100) * Total_bill_amount << endl;
    cout << "total bill: " << (Tip_percentage / 100) * Total_bill_amount + Total_bill_amount << endl; 
    cout << "Amount per person: " << (Tip_percentage / 100) * Total_bill_amount + Total_bill_amount / Number_of_people; 
    
    
    
}