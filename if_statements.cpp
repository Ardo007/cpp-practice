#include <iostream>

int main(){

    int age;

    std::cout << "enter your age: ";
    std::cin >> age;

    if(age > 50)
    {
        std::cout << "too old nigga";
    }
    else if(age >= 18)
    {
        std::cout << "legal enough time to touch you";
    }
    else
    {
        std::cout << "you're not legal, gtfo";
    }

    return 0;
}