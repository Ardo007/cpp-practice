#include <iostream>

using namespace std;

class Car{
    public:
        string make;
        string model;
        int year;
        string color;

    Car(string make, string model, int y, string c){
        this->make = make;
        this->model = model;
        year = y;
        color = c;
    }
};


int main(){

    //constructor = special method that is called when an objet is instatiated
    //              useful fpr assigning values to attributes as arguments

    Car car1("Chevy", "corvette", 2022, "blue");
    Car car2("ford", "mustand", 2023, "black");

    cout << car1.make << endl;
    cout << car1.model << endl;
    cout << car1.year << endl;
    cout << car1.color << endl;

    cout << car2.make << endl;
    cout << car2.model << endl;
    cout << car2.year << endl;
    cout << car2.color << endl;

    return 0;
}