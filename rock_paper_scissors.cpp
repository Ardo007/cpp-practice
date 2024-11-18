#include <iostream>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){

    char player;
    char computer;

    player = getUserChoice();
    std::cout << "your choice: "; 
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "computer's choice: ";
    showChoice(computer);

    chooseWinner(player, computer);


    return 0;
}

char getUserChoice()
{
    char player;
    std::cout << "Rock-Paper-Scissors game!\n";

    do
    {
        std::cout << "Choose one of the following";
        std::cout << "*************************\n";
        std::cout << "what would you like to choose:\n";
        std::cout << "'r' for Rock\n";
        std::cout << "'p' for paper\n";
        std::cout << "'s' for Scissors\n";
        std::cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');
    
    return player;
}

char getComputerChoice()
{
    srand(time(0));
    int num = rand() % 3 + 1;

    switch (num)
    {
    case 1: 
        return 'r';
        break;
    case 2:
        return 'p';
        break;
    case 3:
        return 's';
        break;
    }

    return 0;
}

void showChoice(char choice)
{
    switch (choice)
    {
    case 'r':
        std::cout << "Rock\n"; 
        break;
    case 'p':
        std::cout << "Paper\n";
        break;
    case 's':
        std::cout << "Scissors\n";
        break;
    }
}

void chooseWinner(char player, char computer)
{
    switch (player)
    {
    case 'r':
        if(computer == 's')
        {
            std::cout << "you win!";
        }
        else if(computer == 'p')
        {
            std::cout << "you lose";
        }
        else{
            std::cout << "it's a draw";
        }
        break;
    case 'p':
            if(computer == 'r')
        {
            std::cout << "you win!";
        }
        else if(computer == 's')
        {
            std::cout << "you lose";
        }
        else{
            std::cout << "it's a draw";
        }
        break;
    case 's':
        if(computer == 'p')
        {
            std::cout << "you win!";
        }
        else if(computer == 'r')
        {
            std::cout << "you lose";
        }
        else{
            std::cout << "it's a draw";
        }
        break;
    }
}