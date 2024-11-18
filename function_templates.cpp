#include <iostream>

// using namespace std;


// int max(int x, int y){
//     return(x > y) ? x : y;
// }

// double max(double x, double y){
//     return(x > y) ? x : y;
// }

// char max(char x, char y){
//     return(x > y) ? x : y;
// }

template <typename T, typename U>               // can't be used with namespace 

auto max(T x, U y){
    return(x > y) ? x : y;
}


int main(){

    // function template = describes what a function looks like.
    //                     can be used to generate as many overloaded funtions
    //                     as needed, each using different data types.

    std::cout << max(1, 2.2) << '\n';

    return 0;
}