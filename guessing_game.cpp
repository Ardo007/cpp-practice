#include <iostream>
int main(){


    int answer;
    int guess;
    int tries = 0;

    srand(time(NULL));
    answer = (rand() % 100) + 1;

    std::cout << "######## NUMBER GUESSING GAME ######## \n";
    
    do
    {
        std::cout << "enter a guess between 1-100: ";
        std::cin >> guess;
        tries++;

        if (guess > answer)
        {
            std::cout << "too high!\n";
        }
        else if(guess < answer)
        {
            std::cout << "too low!\n";
        }
        else
        {
            std::cout << "CORRECT, # of tries: " << tries << '\n';
        }

    } while (guess != answer);
    
    std::cout << "###############################\n";

    return 0;
}