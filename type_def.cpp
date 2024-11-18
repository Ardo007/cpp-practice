#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;
// typedef int number_t;
typedef double decimal_t;

using letter_t = char;
using text_t = std::string;
using number_t = int;

int main() {

    std::string firstName = "ardashes";
    text_t lastname = "manougian";
    
    int x = 1;
    number_t age = 12;

    letter_t letter = 'w';
    decimal_t pi = 3.14;

    std::cout << firstName<< " " << lastname << " " << age;
 
    return 0;
}

//   typedef = using a nickname for a data type instead of typing
//              that data type itself. instead of typing std::string
//              to assign a string value, we can change that to text_t
//              to assign a sting value
//              replaces with 'using' (work better w/ templates)
