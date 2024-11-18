#include <iostream>

int main(){

    srand(time(NULL));  // to have random numbers

    // rand() to generate a random number. % *number* to say your range. + 1 to not have a 0 and get the range you want
    // cuz if you say % 6 you will only get from 0-5.
    int num1 = (rand() % 6+ 1);
    int num2 = (rand() % 6+ 1);   
    int num3 = (rand() % 6+ 1);   


    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';


    return 0;
}