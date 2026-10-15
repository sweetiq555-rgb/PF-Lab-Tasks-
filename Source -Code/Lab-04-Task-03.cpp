#include <iostream>
using namespace std;
int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if(marks >= 75) {
        cout << "Grade A";
    } else if(marks >= 60) {
        cout << "Grade B";
    } else if(marks >= 45) {
        cout << "Grade C";
    } else {
        cout << "Grade D";
    }
    return 0;
}