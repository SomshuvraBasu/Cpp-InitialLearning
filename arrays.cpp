#include <iostream>
using namespace std;
int main()
{
    int numeros[10];
    int LuckyNums[20] = {4, 8, 15, 16, 17, 98}; /* number inside sq brackett tells c++ how many elements 
    can be stored like here it is 20 */
    cout << LuckyNums[2];
    LuckyNums[0] = 38;
    cout << LuckyNums[0];
    numeros[0] = 25;
    numeros[1] = 35;

    return 0;
}