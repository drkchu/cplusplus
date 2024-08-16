#include <iostream>

int main()
{
    std::cout << "Enter a number:" << '\n';

    int x{};
    std::cin >> x;

    std::cout << "The number you've entered was: " << x << '\n';
    return 0;
}