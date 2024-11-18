#include <iostream>

// void happyBirthdayFunction(){
//     for (int i = 0; i < 3; i++)
//     {
//         std::cout << "happy birthday to you\n";
//     }
// }

void happyBirthdayFunction(std::string lastname, int age); 

// you either write the at the top or declare it at the top then define it, write it, later
// you can declare the variable out of main to use it in the function or make the function recieve an argument

std::string name;


int main(){

    name = "ardo";
    std::string lastname = "mano";
    int age = 22;

    happyBirthdayFunction(lastname, age);

    return 0;
}

void happyBirthdayFunction(std::string lastname, int age){
    for (int i = 0; i < 3; i++)
    {
        std::cout << "happy birthday to " << name << " " << lastname << '\n';
        std::cout << "you are " << age << " years old\n";
    }
}