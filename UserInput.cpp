#include <iostream>
using namespace std;
int main()
{
    int age;
    string name;
    cout << "enter your age: ";
    cin >> age;
    age++;
    cout << "Your age next year will be " << age << endl;
    cin.ignore();
    cout << "enter your name: ";
    getline(cin, name);
    cout << "hello " << name << endl;

    return 0;
}