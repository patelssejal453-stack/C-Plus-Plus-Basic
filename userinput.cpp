#include <iostream>
using namespace std;
int main()
{
    //USER INPUT + OPERATORS
    int num1, num2;
    cout << "Enter first number:" << endl;
    cin >> num1;
    cout << "Enter second number:" << endl;
    cin >> num2;
    cout << "the sum is:" << num1 + num2 << endl;
    cout << "the sub is:" << num1 - num2 << endl;
    cout << "the mult is:" << num1 * num2 << endl;
    cout << "the div is:" << (float)num1 / num2 << endl;//TYPE CASTING
    cout << "the mod is:" << num1 % num2 << endl;
    return 0;
}