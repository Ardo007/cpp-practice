#include <iostream>

using namespace std;


int main(){

    // fill() = fills a range of elements with a specified value
    //          fill(begin, end, value)

    const int SIZE = 99;
    string foods[SIZE];

    // fill(foods, foods + SIZE, "pizza");   we start from beginnig of the array till the end

    // fill(foods, foods + (SIZE/2), "pizza");     //we start from beginning of the array till halfway
    // fill(foods + (SIZE/2), foods + SIZE, "burger");     //we start from halfway and continue till the end of the array

    fill(foods, foods + (SIZE * 1/3), "pizza");   
    fill(foods + (SIZE * 1/3), foods + (SIZE * 2/3), "burger");
    fill(foods + (SIZE * 2/3), foods + SIZE, "hotdog"); 


    for(string food : foods){
        cout << food << '\n';
    }

    return 0;
}