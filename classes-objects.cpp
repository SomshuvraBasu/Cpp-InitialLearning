#include <iostream>
using namespace std;
class Book
{
public:
    string title;
    string author;
    int pages;
};
int main()
{
    Book book1;
    book1.title = "1971";
    book1.author = "Ian Cardozo";
    book1.pages = 345;
    cout << book1.title << endl;

    return 0;
}