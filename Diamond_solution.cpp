#include <iostream>

int main()
{
    int step = 0;
    std::cout << "Step: " << std::endl;
    std::cin >> step;


    for (int i = 0; i <= step; ++i)
    {   
        if (i==0)
        {
            std::cout << std::string(step-i, ' ') << std::string(i+1, '*') << std::endl;
        }
        else
        {
        std::cout << std::string(step-i, ' ') << std::string(2*i+1, '*') << std::endl;
        }
    }

    for (int i = 1; i <= step; ++i)
    {
        if (i == 1)
        {
        std::cout << std::string(step - (step - i), ' ') <<std::string((2*step) - i, '*') <<std::endl;
        }
        else
        {
        std::cout << std::string(step - (step - i), ' ') << std::string((2*step) - (2*i - 1), '*') << std::endl;
        }
    }
    return 0;
}