#include <iostream>
#include <string>

class Welcome
{
public:
    Welcome()
    {
        std::cout << "Welcome ";
    }
};

class Hello
{
public:
    Hello()
    {
        std::cout << "Hello ";
    }
};

int main()
{
    std::string name;

    // Input the name from the user
    std::cout << "Enter the name of the person: ";
    std::cin >> name;

    // Create objects of Welcome and Hello classes
    Welcome welcome;
    std::cout << name << std::endl;

    Hello hello;
    std::cout << name << std::endl;

    return 0;
}
