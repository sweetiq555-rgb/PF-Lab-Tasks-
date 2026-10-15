#include <iostream>
using namespace std;
int main() {
    int qty = 10, salesReps = 3;
    double unitsEach;

    unitsEach = static_cast<double>(qty) / salesReps;

    cout << "Units Each = " << unitsEach;

    return 0;
}