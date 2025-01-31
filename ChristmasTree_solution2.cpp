#include <iostream>

int main()
{
    int floor = 0;
    std::cout << "Nb: " << std::endl;
    std::cin >> floor;

    for (int i = 1; i <= floor; ++i)
    {
        std::cout << std::string(floor - i, ' ') << std::string(2*i, '*') << std::endl;  
    }
    return 0;
}
