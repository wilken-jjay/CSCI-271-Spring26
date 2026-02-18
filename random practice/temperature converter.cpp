#include <iostream>
using namespace std;
int main () {
	double fahrenheit;

	cout << "Enter the temperature in Fahrenheit:  " << endl;
 	cin >> fahrenheit;
    cout << "celsius: " << (fahrenheit - 32) * 5 / 9;

}