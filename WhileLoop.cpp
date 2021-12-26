#include <iostream>
using namespace std;
int main()
{
    int index = 10;
    int index2 = 6;
    while (index >= 0)
    {
        cout << index << endl;
        index--;
    }
    do /*first executes the given part then checks the condition */
    {
        cout << index2 << endl;
        index2++;
        /* code */
    } while (index2 <= 5); /* do this then check and if true again do and check so on */

    return 0;
}