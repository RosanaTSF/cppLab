#include <iostream>
#include <string>

float potentiation(float base, int exponent)
{
    float result = 1.0;

    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}

int main()
{
    while (true)
    {
        float base;
        std::cout << "Enter the base number: ";
        std::cin >> base;

        int exponent;
        std::cout << "Enter the exponent: ";
        std::cin >> exponent;

        float result = potentiation(base, exponent);
        std::cout << "Base " << base << " elevado a " << exponent << " = " << result << std::endl;

        std::string choice;
        std::cout << "Do you wish to continue? (yes/no): ";
        std::cin >> choice;

        if (choice == "no")
        {
            break;
        }
    }

    return 0;
}
