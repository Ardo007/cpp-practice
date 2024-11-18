#include <iostream>

using namespace std;

int main(){

    
    //   pointers = variable that stores a memory address of another variable
    //              sometimes it's easier to work with an address

    // & address-of operator
    // * deference operator 

    string name = "ardashes";
    int age = 21;

    string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

    string *pName = &name;
    int *pAge = &age;

    string *pFreePizzas = freePizzas;

    cout << *pName << '\n';   // typing * before the variable makes u access the value inside it
    cout << *pAge << '\n';
    
    cout << *pFreePizzas << '\n';

    return 0;
}