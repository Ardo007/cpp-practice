#include <iostream>

int main(){

    std::string name;

    std::cout << "enter your name: ";
    std::getline(std::cin , name);


    // name.length(); how many characters in a string
    // name.append("@gmail.com");  appends the statement next to the string
    // name.empty(); clears out whatever is in the string, it becomes empty
    // name.at(0); what character is at that index
    // name.insert(0, "@"); insert that string/character at that index.
    // name.find(' '); the indext of the first character in the parenthesis
    // name.erase(0, 3); delete the characters from indext that to that, not inclusive
    


    return 0;
}