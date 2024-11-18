#include <iostream>

using namespace std;

int main(){
    // dynamic memory = Memoory that is allocated after the program is
    //                  already compiled and running.
    //                  use the 'new' operator to allocate
    //                  memory in the heap rather than the stack

    //                  Useful when we don't know how much memory
    //                  we will need. Makes our programs more felxible,
    //                  especially when accepting user input

    // int *pNum = NULL;

    // pNum = new int;

    // *pNum = 21;


    // cout << "address: " << pNum << '\n';
    // cout << "value: " << *pNum << '\n';

    // delete pNum;



    char *pGrades = NULL;

    int size;

    cout << "how many grades to enter in?: ";
    cin >> size;

    pGrades = new char[size];

    for(int i = 0; i < size; i++){
        cout << "enter grade #" << i + 1 << ": ";
        cin >> pGrades[i];
    }

    for(int i = 0; i < size;  i++){
        cout << pGrades[i] << " ";
    }

    delete[] pGrades;
    

    return 0;
}