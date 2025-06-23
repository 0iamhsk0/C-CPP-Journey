#include <iostream>
using namespace std;

class Myheroacademia
{
public:
    int health, level, experience;
    char tier;
};

int main()
{
    cout << "Enter the initial values of Health, Level, Experience and Tier:\n";
    Myheroacademia hero;
    cin >> hero.health >> hero.level >> hero.experience >> hero.tier;
}