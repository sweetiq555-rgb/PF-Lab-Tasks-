#include <iostream>
using namespace std;
int main() {
    int n1=28, n2=32, n3=37, n4=24, n5=33;
    int sum;
    double average;

    sum = n1 + n2 + n3 + n4 + n5;
    average = sum / 5.0;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;
    
    return 0;
}