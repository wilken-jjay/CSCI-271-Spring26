#include <iostream>
using namespace std;
int main () {
    int sales = 95000;
    double state_tax {.04};
    double country_tax {.02};

    cout << "sales: $" << sales << endl;
    cout << "state_tax: $" << (sales * state_tax) << endl;
    cout << "country_tax: $" << (sales * country_tax) << endl;


    return 0;
}