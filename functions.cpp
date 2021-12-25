#include <iostream>
using namespace std;

void sayHi(string name, int age) /* you cant create(declare) this function below main() function;
you must declare it before hand */
{
    cout << "hello " << name << " you are " << age << " years old" << endl;
}
void sayBye(string name);
int main()
{
    sayHi("Madhav", 32);
    sayBye("Jay");
    return 0;
}
void sayBye(string name)
{
    cout << "Bye " << name << endl;
}