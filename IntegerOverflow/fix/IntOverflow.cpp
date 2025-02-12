#include <iostream>
#include <limits>

//max int value: 2147483647
bool willOverflow(int a, int b) {
    // Check if addition will cause overflow or underflow
    if ((b > 0 && a > std::numeric_limits<int>::max() - b) ||  // Overflow check
        (b < 0 && a < std::numeric_limits<int>::min() - b)) {  // Underflow check
        return true;
    }
    return false;
}

int add(int a, int b) {
    if (willOverflow(a, b)) {
        std::cerr << "Error: Integer overflow detected!\n";
        exit(EXIT_FAILURE);  // Stop execution due to overflow
    }
    return a + b;
}

int main() {
    int x, y;
    std::cout << "Enter the first integer (x): ";
    std::cin >> x;
    std::cout << "Enter the second integer (y): ";
    std::cin >> y;
    
    int result = add(x, y);
    std::cout << "Result: " << result << std::endl;
    
    return 0;
}
