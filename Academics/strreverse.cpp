#include <iostream>
#include <string>

void reverseString(std::string &str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        std::swap(str[left], str[right]);
        left++;
        right--;
    }
}

int main() {
    std::string input;

    // Input
    std::cout << "Enter a string: ";
    std::cin >> input;

    // Reverse the string
    reverseString(input);

    // Output the reversed string
    std::cout << "Reversed string: " << input << std::endl;

    return 0;
}
