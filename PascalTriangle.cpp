#include <iostream>

int factorial(int N)
{
    int result = 1;

    for (int i = 0; i <= N; ++i)
    {
        if (i == 0)
        {
            result = 1;
        }
        else
        {
        result *= i;
        }
    }
    return result;
}

int binome(int n, int k)
{
    float C = 0;

    C = factorial(n) / (factorial(k)*factorial(n-k));
    return C;
}


int main()
{
    int n = 0;
    int k = 0;

    std::cout << "n = " << std::endl;
    std::cin >> n;

    for (int i = 0; i <= n; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            std::cout << binome(i,j) << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}