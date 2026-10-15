#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int num1, num2;
    int answer;

    srand(time(0));

    num1 = rand() % 900 + 100;
    num2 = rand() % 900 + 100;

    cout << "Math Tutor" << endl;
    cout << num1 << endl;
    cout << "+ " << num2 << endl;
    cout << "-------" << endl;

    cout << "Press any key and Enter to check answer...";
    cin.get();

    answer = num1 + num2;

    cout << num1 << endl;
    cout << "+ " << num2 << endl;
    cout << "-------" << endl;
    cout << answer << endl