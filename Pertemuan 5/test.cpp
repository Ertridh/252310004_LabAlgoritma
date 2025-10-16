#include <iostream>
#include <string> // Required for std::string(count, char)

int main() {
    int n = 5; // Number of rows/height of the pattern

    // Outer loop for rows
    for (int i = 1; i <= n; ++i) {
        // Inner loop or std::string for printing leading spaces
        // The number of spaces decreases as 'i' increases
        // (n - i) spaces for a right-aligned triangle
        for (int j = 1; j <= (n - i); ++j) {
            std::cout << "  ";
        }

        // Inner loop for printing characters (e.g., asterisks)
        // The number of characters increases as 'i' increases
        for (int k = 1; k <= i; ++k) {
            std::cout << " " << k;
        }
        std::cout << std::endl; // Move to the next line after each row
    }

    return 0;
}
