#include <iostream>
using namespace std;
int main()
{
    int numGrid[3][4] =
        {
            {2, 3, 4, 5},
            {34, 45, 56, 23},
            {1, 32, 11, 22},
        };
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << numGrid[i][j] << endl;
        }
        cout << " " << endl;
    }

    return 0;
}
/*arrays are numbered from zero just like 
others so we dont need equality in the for conditions*/