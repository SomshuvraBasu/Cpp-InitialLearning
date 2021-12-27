#include <iostream>
using namespace std;
int main()
{
    int age = 19;
    int *pAge = &age; //pointer variable
    double point = 4.50;
    double *pPoint = &point;
    string name = "Mohit";
    string *pName = &name;

    cout << "age: " << pAge << endl;
    cout << "point: " << *pPoint << endl; //derefferencing a pointer to grab the value at teh address
    cout << "name: " << *&name << endl;

    return 0;
}