#include <iostream>
using namespace std;
int main()
{
    string phrase = "donald duck";
    cout << "This is the Beginning" << endl;
    cout << "This is world\n";
    cout << "This is mars" << endl;
    cout << phrase.length() << phrase[4] << endl;
    cout << phrase.find("ald", 2) << endl;
    cout << phrase.substr(4, 5) << endl;
    return 0;
}