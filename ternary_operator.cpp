#include <iostream>

int main(){

    // ternary operator ?: = replacement to an if/else statement
    // condition ? expression1 : expression2;

    //example 
    int grade = 75;

    // if(grade >= 60)
    // {
    //     std::cout << "you pass!";
    // }
    // else {
    //     std::cout << "you fail!";
    // }

    // grade >= 60 ? std::cout << "you cooked!" : std::cout << "you're cooked!";

    int number;
    std::cout << "enter a number to check if even or odd: ";
    std::cin >> number;

    number % 2 == 0 ? std::cout << "even" << '\n' : std::cout << "odd" << '\n';

    bool hungry = true;
    // hungry ? std::cout << "u hungry" : std::cout << "u full";
    std::cout << (hungry ? "you are hungry" : "you are full");


    return 0;
}