#include <iostream>
#include <string>
#include <cctype>

int countConsonants(const std::string& str) {
    int consonantCount = 0;

    for (char ch : str) {
        // Check if the character is an alphabet and not a vowel (assuming English alphabet)
        if (isalpha(ch) && strchr("aeiouAEIOU", ch) == nullptr) {
            consonantCount++;
        }
    }

    return consonantCount;
}

int main() {
    // Input strings
    std::string str1 = "pwians";
    std::string str2 = "abdc";

    // Count consonants
    int count1 = countConsonants(str1);
    int count2 = countConsonants(str2);

    // Display the counts
    std::cout << "Consonants in \"" << str1 << "\": " << count1 << std::endl;
    std::cout << "Consonants in \"" << str2 << "\": " << count2 << std::endl;

    return 0;
}
