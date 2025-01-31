#include <iostream>

int main()
{
    int floor = 0;
    std::cout << "Nb: " << std::endl;
    std::cin >> floor;

    for (int i = 0; i <= floor; ++i)
    {   
        if (i==0)
        {
            std::cout << std::string(floor-i, ' ') << std::string(i+1, '*') << std::endl;
        }
        else
        {
        std::cout << std::string(floor-i, ' ') << std::string(2*i+1, '*') << std::endl;
        }
    }
    return 0;
}
