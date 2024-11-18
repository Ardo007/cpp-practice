#include <iostream>
using namespace std;

int main(){

    // foreach loop: loop that eases the traversal over an iterable data set

    string students[] = {"sponge", "pat", "squid"};

    for(string students : students)
    {
        cout << students << '\n';
    }

    int grades[] = {32, 321, 3, 21};

    for(int grades : grades)
    {
        cout << grades << '\n'; 
    }
    
}