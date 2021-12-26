#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    char op;
    cout << "enter first number: ";
    cin >> num1;
    cout << "enter second number: ";
    cin >> num2;
    cout << "enter operator: ";
    cin >> op;

    if (op == '+')
    {
        cout << num1 + num2;
    }
    else if (op == '-')
    {
        cout << num1 - num2;
    }
    else if (op == '*')
    {
        cout << num1 * num2;
    }
    else if (op == '/')
    {
        cout << num1 / num2;
    }
    else
    {
        cout << "invalid operator";
    }

    return 0;
}