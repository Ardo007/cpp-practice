#include <iostream>

using namespace std;

class Stove{
    private:
        int temperature = 0;

    public:

    int getTemperature(){
        return temperature;
    }

    void setTemperature(int temperature){
        if(temperature < 0){
            this->temperature = 0;
        }
        else if(temperature >= 10){
            this->temperature = 10;
        }
        else{
            this->temperature = temperature;
        }
    }


};

int main() {
    // Abstraction = hiding the implementation details of a class and only showing the necessary parts
    //               hiding unnecessary data from outside a class
    // getter = function that makes a private attribute READABLE
    // setter = function that makes a private attribute WRITABLE
    
    Stove stove;

    //stove.temperature = 1000000;
    stove.setTemperature(-3);
    
    cout << "the temp setting is " << stove.getTemperature() << endl;
    
    
    return 0;
}