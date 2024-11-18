#include <iostream>

int main(){

    char op;
    double num1;
    double num2;
    double answer;

    std::cout << "*************** CALCULATOR ***************" << '\n';

    std::cout << "enter your first number: ";
    std::cin >> num1;

    std::cout << "enter your second number: ";
    std::cin >> num2;

    std::cout << "enter you operator (+ - * /): ";
    std::cin >> op;

    switch (op)
    {
    case '+':
        answer = num1 + num2;
        break;
    case '-':
        answer = num1 - num2;
        break;
    case '*':
        answer = num1 * num2;
        break;
    case '/':
        answer = num1 / num2;
        break;
    default:
        std::cout << "please enter a proper operator (+ - * /)" << '\n';
        break;
    }

    std::cout << "your answer is: " << answer << '\n';

    std::cout << "********************************************";    
    return 0;
}