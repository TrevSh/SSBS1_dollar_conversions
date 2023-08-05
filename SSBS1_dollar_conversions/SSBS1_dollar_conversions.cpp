// This program converts dollars to various currencies(As of 8/4/23)

#include <iostream>

constexpr double dollar_to_yen = 141.76;
constexpr double dollar_to_euro = 0.91;
constexpr double dollar_to_pound = 0.78;
char euro = 'e';

int main()
{
    double dollar = 0;
    char conversion = 0;
    std::cout << "This program converts dollars to yen,euro,or pound (y/e/p).\n";
    std::cout << "Enter an amount followed by the a space and the first letter of the target currency: ";


    

    while (std::cin >> dollar) {
        std::cin.get();
        std::cin >> conversion;

        switch (conversion) {
            //'e' must come after a space, as the console reads it as an exponent otherwise
        case 'e':
            std::cout << "\n$" << dollar << " is " << dollar_to_euro * dollar << " in euros\n";
            break;
        case 'y':
            std::cout << "\n$" << dollar << " is " << dollar_to_yen * dollar << " in yen\n";
            break;
        case 'p':
            std::cout << "\n$" << dollar << " is " << dollar_to_pound * dollar << " in pounds\n";
            break;
        default:
            std::cout << conversion << "\n is not a recognized conversion. Please try again: ";
            continue;
        }

    }
}