
#include <iostream>
using namespace std;
int main() {
   double GPA {0};
   int SAT_score {0-1600};
   double Volunteer_hours {0};
   
   cout <<"enter GPA: ";
   cin >> GPA;
   
   cout <<"enter SAT score: ";
   cin >> SAT_score;
   
   cout <<"enter Volunteer hours: ";
   cin >> Volunteer_hours;
   
   
   if ( GPA >= 3.5 && SAT_score >= 1200 || GPA >= 3.8 && Volunteer_hours >= 100) {
       cout << endl << "Student qualifies for scholarship.";
   }else{ 
       cout << endl << "Student does not qualify.";
   }
   
   
   

    
}