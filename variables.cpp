#include <iostream>

int main(){

    // integer
    int y = 4;
    int x;
    x = 5;
    int sum = x + y;
    int age = 10;

    // decimal
    double price = 10.99;
    double gpa = 2.5;

    // single character
    char grade = 'A';
    char initial = 'M';
    char currency = '$';

    // boolean
    bool real = true;
    bool cap = false;

    // string
    std::string name = "Bro";
    std::string day = "friday";
    std::string food = "smth";



    std::cout << name << '\n';


    std::cout << "hello " << name << '\n';
    std::cout << "you are " << age << " years old" << '\n';
    return 0;
}