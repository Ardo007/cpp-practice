#include <iostream>

int main(){

    std::string name;
    int age;

    std::cout << "how old are you? ";
    std::cin >> age;

    std::cout << "hello what is your name? ";
    std::getline(std::cin >> std::ws, name);


    std::cout << "hello " << name << '\n';
    std::cout << "you are " << age << " years old.";
    return 0;
}