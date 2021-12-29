#include <iostream>
using namespace std;
class Movies
{
private:
    string rating;

public:
    string movieName;
    string actor;
    Movies(string aName, string aActor, string aRating)
    {
        movieName = aName;
        actor = aActor;
        setRating(aRating);
    }
    void setRating(string aRating)
    {
        if (aRating == "U" || aRating == "U/A" || aRating == "A" || aRating == "R")
        {
            rating = aRating;
        }
        else
        {
            rating = "NR";
        }
    }
    string getRating()
    {
        return rating;
    }
};
int main()
{
    Movies Movie1("Shershah", "Sid", "U/A");
    Movies Movie2("BellBBottom", "Akshay", "supervision");
    cout << Movie1.getRating() << endl;
    cout << Movie2.getRating() << endl;
    return 0;
}