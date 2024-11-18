#include <iostream>
#include <cmath>


int main(){

    double a;
    double b;
    double c;

    std::cout << "what is side A?" << '\n';
    std:: cin >> a;
    std::cout << "what is side B?" << '\n';
    std:: cin >> b;

    // a = pow(a, 2);
    // b = pow (b, 2);
    c = sqrt(pow(a, 2) + pow (b, 2));

    std::cout << "the hypotenuis is " <<c;

    return 0;
}