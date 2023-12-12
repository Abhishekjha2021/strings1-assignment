#include <iostream>
#include <string>

bool isPalindrome(const std::string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main() {
    // Input strings
    std::string str1 = "abcde";
    std::string str2 = "abcdcba";

    // Check if palindrome
    bool result1 = isPalindrome(str1);
    bool result2 = isPalindrome(str2);

    // Display the results
    std::cout << "\"" << str1 << "\" is " << (result1 ? "Palindrome" : "Not Palindrome") << std::endl;
    std::cout << "\"" << str2 << "\" is " << (result2 ? "Palindrome" : "Not Palindrome") << std::endl;

    return 0;
}
