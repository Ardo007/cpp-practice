#include <iostream>
using namespace std;

int total(int grades[], int size){
    int total = 0;

    for(int i = 0; i < size; i++){
        total += grades[i];
    }

    return total;
}

int main(){

    int grades[] = {41, 56, 78, 91};
    int size = sizeof(grades)/sizeof(grades[0]);

    int allMarks = total(grades, size);

    cout << allMarks;

    return 0;
}

// when passing an array to a function, the argument becomes a pointer and the function cannot know the size of the array
// so we have to also pass the size of the array as an argument as well 