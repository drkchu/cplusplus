#include <iostream>

int main()
{
    std::cout << "Enter three numbers: ";

    int x{};
    int y{};
    int z{};

    std::cin >> x >> y >> z;

    std::cout << "The first number was " << x << ", followed by " << y << " and " << z << '\n';
}