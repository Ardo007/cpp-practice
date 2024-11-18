#include <iostream>

double areaOfSquare(double side);
double volumeOfSquare(double length);

int main(){

    double sideOfSquare;

    std::cout << "enter the side of a square: ";
    std::cin >> sideOfSquare;
    
    double area = areaOfSquare(sideOfSquare);
    double volume = volumeOfSquare(sideOfSquare);

    std::cout << "your square has an area of " << area << " and a volume of " << volume << '\n';
    

    return 0;
}

double areaOfSquare(double side){
    return side * side;
}

double volumeOfSquare(double length){
    return length * length * length;
}

