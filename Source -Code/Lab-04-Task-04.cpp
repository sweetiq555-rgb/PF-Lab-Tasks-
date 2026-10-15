#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(num > 0) {
        cout << "Number is Positive" << endl;
        int count = 0;
        int temp = num;
        while(temp > 0) {
            temp = temp / 10;
            count++;
        }
        cout << "Total digits: " << count << endl;
    } else {
        // Nested if...else for largest? agar 2 number chahiye to
        if(num < 0) {
            cout << "Number is Negative" << endl;
        } else {
            cout << "Number is Zero" << endl;
        }
    }
    return 0;
}