#include <iostream>

int main(){

    std::string name;

    while(name.empty()){
        std::cout << "enter your name: ";
        std::getline(std::cin, name);
    }

    std::cout << "your name is " << name << '\n';

    int number;

    do
    {
        std::cout << "enter a positive number: ";
        std::cin >> number;
    } while (number <= 0);
    
    for(int i = 0; i <= 2; i++){
        std::cout << "HAPPY NEW YEAR\n";
    }
    for(int j = 0; j <= 6; j+=2){
        std::cout << j << '\n';
    }



    return 0;
}