#include <iostream>
#include <string>

const std::string PASSWORD = "rictro";  // Store password safely

int main()
{
    std::string input;

    std::cout << "Enter password: ";
    std::cin >> input;

    if (input == PASSWORD)
        std::cout << "Access granted\n";
    else
        std::cout << "Access denied\n";

    return 0;
}
