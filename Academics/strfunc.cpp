#include <iostream>
#include <string>
#include <map>

// Function to convert a character to Morse code
std::string charToMorse(char c) {
    // Define a map for character to Morse code conversion
    std::map<char, std::string> morseCodes = {
        {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."},
        {'F', "..-."}, {'G', "--."}, {'H', "...."}, {'I', ".."}, {'J', ".---"},
        {'K', "-.-"}, {'L', ".-.."}, {'M', "--"}, {'N', "-."}, {'O', "---"},
        {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"},
        {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"}, {'Y', "-.--"},
        {'Z', "--.."}, {' ', "/"}
    };

    // Convert character to uppercase (if it's a letter)
    if (std::isalpha(c)) {
        c = std::toupper(c);
    }

    // Lookup and return Morse code for the character
    return morseCodes[c];
}

// Function to convert a sentence to Morse code
std::string convertToMorseCode(const std::string& sentence) {
    std::string morseCode;
    
    for (char c : sentence) {
        if (std::isalnum(c) || c == ' ') {
            // Convert alphanumeric characters and spaces
            std::string code = charToMorse(c);
            if (!morseCode.empty() && c != ' ') {
                morseCode += " ";  // Add space between Morse codes for letters
            }
            morseCode += code;
        }
    }
    
    return morseCode;
}

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);

    std::string morseCode = convertToMorseCode(sentence);
    std::cout << morseCode << std::endl;

    return 0;
}
