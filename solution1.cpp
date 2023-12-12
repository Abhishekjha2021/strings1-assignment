#include <iostream>
#include <string>

void updateOddPositions(std::string& str) {
    int n = str.size();

    // Iterate through odd positions and update to '#'
    for (int i = 1; i < n; i += 2) {
        str[i] = '#';
    }
}

int main() {
    // Input string
    std::string str1 = "Pbwcshkuiglhlds";
    std::string str2 = "a";

    // Update odd positions
    updateOddPositions(str1);
    updateOddPositions(str2);

    // Display the modified strings
    std::cout << "Modified String 1: " << str1 << std::endl;
    std::cout << "Modified String 2: " << str2 << std::endl;

    return 0;
}
