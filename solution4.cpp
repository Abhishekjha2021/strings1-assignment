#include <iostream>
#include <string>

void reverseSecondHalf(std::string& str) {
    int length = str.length();

    // Check if the length is even
    if (length % 2 == 0) {
        int mid = length / 2;

        // Reverse the second half
        for (int i = mid, j = length - 1; i < j; ++i, --j) {
            std::swap(str[i], str[j]);
        }
    }
}

int main() {
    // Input strings
    std::string str1 = "abcdefgh";
    std::string str2 = "pwians";

    // Reverse the second half
    reverseSecondHalf(str1);
    reverseSecondHalf(str2);

    // Display the modified strings
    std::cout << "Modified String 1: " << str1 << std::endl;
    std::cout << "Modified String 2: " << str2 << std::endl;

    return 0;
}
