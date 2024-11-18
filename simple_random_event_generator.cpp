#include <iostream>
#include <ctime>

int main(){
 
    srand(time(0));

    int randNum = rand() % 5 + 1; 

    switch (randNum)
    {
    case 1:
        std::cout << "you are cooked\n";
        break;
    case 2:
        std::cout << "you are extremly cooked!\n";
        break;
    case 3:
        std::cout << "you are cooked cooked!\n";
        break;
    case 4:
        std::cout << "you are beyond cooked\n";
        break;
    case 5:
        std::cout << "you are roasted\n";
        break;
    default:
        std::cout << "you are built different!\n";
        break;
    }

    return 0;
}