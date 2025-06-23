#include <iostream>
using namespace std;

// Function to count the number of vowels in a sentence
int countVowels(char** sentence) {
    int count = 0;
    char* vowels = "aeiouAEIOU";
    for (int i = 0; *(*sentence + i) != '\0'; i++) {
        for (int j = 0; vowels[j] != '\0'; j++) {
            if (*(*sentence + i) == vowels[j]) {
                count++;
                break;
            }
        }
    }
    return count;
}

// Main function
int main() {
    char sentence[1000];
    cout << "Enter a sentence: ";
    cin.getline(sentence, 1000);
    char* ptr = &sentence[0];
    int numVowels = countVowels(&ptr);
    cout << "Number of vowels: " << numVowels << endl;
    return 0;
}