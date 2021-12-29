#include <iostream>
using namespace std;
class Chef
{
public:
    void makePaneer()
    {
        cout << "The chef makes paneer" << endl;
    }
    void makeHalwa()
    {
        cout << "The chef makes Halwa" << endl;
    }
    void makeParatha()
    {
        cout << "The chef makes Paratha" << endl;
    }
};
class PunjabiChef : public Chef
{
public:
    void makeButterPaneer()
    {
        cout << "The chef makes Butter paneer" << endl;
    }
    void makeParatha()
    {
        cout << "The chef makes Paratha with Butter" << endl;
    }
};

int main()
{
    Chef Raju;
    PunjabiChef Shayam;
    Raju.makeHalwa();
    Raju.makePaneer();
    Shayam.makeButterPaneer();
    Shayam.makeParatha();
    Shayam.makeHalwa();

    return 0;
}