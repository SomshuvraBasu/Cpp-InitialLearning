#include <iostream>
using namespace std;
class Book
{
public:
    string title;
    string author;
    int pages;
    Book(string aTitle, string aAuthor, int aPages)
    {
        cout << "creating object" << endl;
        title = aTitle;
        author = aAuthor;
        pages = aPages;
    }
};
int main()
{
    Book book1("1971", "Ian Cardozo", 340);
    Book book2("Trojan","Anurag",540);
    cout << book1.title << endl;

    return 0;
}