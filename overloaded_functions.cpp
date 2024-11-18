#include <iostream>


void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

int main(){

    // a function can have the same name but you need different parameters.
    // the function's name + parameters is a function's signature
    // each function signature needs to be unique 

    
    bakePizza();
    bakePizza("pepperoni");
    bakePizza("pepperoni", "mushroom");


    return 0;
}

void bakePizza(){
    std::cout << "here is your pizza!\n";
}

void bakePizza(std::string topping1){
    std::cout << "here is your " << topping1 << " pizza!\n";
}

void bakePizza(std::string topping1, std::string topping2){
    std::cout << "here is your " << topping1 << " and " << topping2 << " pizza!\n";
}