#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){

    double balance = 0;
    int choice = 0;

    do
    {
        std::cout << "******************\n ";
        std::cout << "Enter your choice:\n";
        std::cout << "******************\n ";
        std::cout << "1. show balance\n";
        std::cout << "2. deposit money\n";
        std::cout << "3. withdraw money\n";
        std::cout << "4. exit\n";
        std::cin >> choice;

        std::cin.clear();
        fflush(stdin);

        switch(choice){
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                showBalance(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                showBalance(balance);
                break;
            case 4:
                std::cout << "thx for visiting!";
                break;
            default:
                std::cout << "invalid choice\n";
                break;
        }     
    } while (choice != 4);
    
    return 0;
}


void showBalance(double balance)
{
    std::cout << "your balance is $" << std::setprecision(2) << std::fixed << balance << '\n';
}


double deposit()
{
    double ammount = 0;

    std::cout << "type in an ammount to deposit: ";
    std::cin >> ammount;

    if(ammount > 0)
    {
        return ammount;
    }
    else {
        std::cout << "that's not a valid ammount!\n";
        return 0;
    }
}


double withdraw(double balance)
{
    double ammount = 0;
    std::cout << "choose an ammount to withdraw: ";
    std::cin >> ammount;

    if(ammount < 0)
    {
        std::cout << "that is an invalid ammount!\n";
        return 0;
    }
    else if( ammount > balance )
    {
        std::cout << "insufficient funds\n";
        return 0;
    }
    else {
        return ammount;
    }
}