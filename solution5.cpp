#include <iostream>
#include <string>

int stringToInt(const std::string& str) {
    int result = 0;

    for (char ch : str) {
        // Check if the character is a digit
        if (ch >= '0' && ch <= '9') {
            // Convert the character to its integer value
            int digit = ch - '0';

            // Update the result by adding the digit
            result = result * 10 + digit;
        } else {
            // If non-digit character is encountered, break the loop
            break;
        }
    }

    return result;
}

int main() {
    // Input strings
    std::string str1 = "3244";
    std::string str2 = "12";

    // Convert strings to integers
    int result1 = stringToInt(str1);
    int result2 = stringToInt(str2);

    // Display the results
    std::cout << "Integer representation of \"" << str1 << "\": " << result1 << std::endl;
    std::cout << "Integer representation of \"" << str2 << "\": " << result2 << std::endl;

    return 0;
}
