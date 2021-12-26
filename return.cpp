#include <iostream>
#include <cmath>
using namespace std;

double cube(double num)
{
    return pow(num, 3);
    cout << "Not printed"; /*After return statement C++ breaks away from the function */
}

int main()
{
    cout << "hello" << endl;
    double answer = cube(5);
    cout << answer;
    return 0;
}