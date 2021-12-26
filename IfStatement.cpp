#include <iostream>
using namespace std;
int getMax(int num1, int num2)
{
    int result;
    if (num1 > num2)
    {
        result = num1;
    }
    else if (num2 > num1)
    {
        result = num2;
    }
    else
    {
        cout << "Both equal";
    }
    return result;
}
int main()
{
    bool isMale = true;
    bool isTall = false;
    if (isMale && isTall)
    {
        cout << "you are a tall male";
    }
    else
    {
        if (isTall)
        {
            cout << "you are Tall but not male";
        }
        else if (isMale && !isTall)
        {
            cout << "you are a short male";
        }
    }

    cout << getMax(32, 24);

    return 0;
}