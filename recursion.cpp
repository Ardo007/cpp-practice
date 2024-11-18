#include <iostream>

using namespace std;


// void walk(int steps){                   //itterative approach
//     for(int i = 0; i < steps; i++){
//         cout << "you take a step!\n";
//     }
// }

void walk1(int steps){                   //recursive approach
    if(steps > 0){
        cout << "you take a step!\n";
        walk1(steps - 1);
    }
}


// int factorial(int num){                  //itterative approach
//     int result = 1;
//     for(int i = 0; i <= num; i++){
//         result = result * i;
//     }

//     return result;
// }


int factorial(int num){                 //recursive approach 
    if(num > 1){            
        return num * factorial(num - 1);
    }
    else{
        return 1;
    }

}


int main(){

    // recursion = a programming rechnique where a function
    //             invokes itself from within
    //             break a complex concept into a repeatable single step

    // (iterative vs recursive)

    // advantages = less code and is cleaner
    //              useful for sorting and searching algorithms

    // disadvantages = uses more memory
    //                 slower

    walk1(100);




    return 0;
}