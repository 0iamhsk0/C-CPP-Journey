#include <iostream>
#include <queue>
#include <string>

int main()
{
    std::string input_string;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input_string);

    std::queue<char> char_queue;

    // Enqueue characters from the input string in reverse order
    for (int i = input_string.length() - 1; i >= 0; i--)
    {
        char_queue.push(input_string[i]);
    }

    std::string reversed_string;

    // Dequeue characters to reverse the string
    while (!char_queue.empty())
    {
        reversed_string += char_queue.front();
        char_queue.pop();
    }

    std::cout << "Reversed string: " << reversed_string << std::endl;

    return 0;
}
