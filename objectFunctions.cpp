#include <iostream>
using namespace std;
class Book
{
public:
    string title;
    string author;
    int pages;
    Book()
    {
        title = "empty";
        author = "empty";
        pages = 0;
    }
    Book(string aTitle, string aAuthor, int aPages)
    {
        cout << "creating object" << endl;
        title = aTitle;
        author = aAuthor;
        pages = aPages;
    }
    bool isLong()
    {
        if (pages >= 350)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    Book book1("1971", "Ian Cardozo", 340);
    Book book2("Trojan", "Anurag", 540);
    cout << book1.isLong() << endl;
    cout << book2.isLong() << endl;

    return 0;
}