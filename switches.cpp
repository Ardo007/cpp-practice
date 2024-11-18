#include <iostream>

int main(){

    char grade;
    std::cout << "what letter grade: ";
    std::cin >> grade;

    switch (grade)
    {
    case 'A':
        std::cout << "LET HIM COOK";
        break;
    case 'B':
        std::cout << "cooked";
        break;
    case 'C':
        std::cout << "not bad";
        break;
    case 'D':
        std::cout << "almost got cooked";
        break;
    case 'F':
        std::cout << "you're cooked";
        break;
    default:
        std::cout << "you're beyond cooked";
        break;
    }
    return 0;
}