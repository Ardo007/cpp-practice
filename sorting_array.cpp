/* 
    this is a bubble sort
    start from the first 2 elements in an array and if the first element is bigger then we will need to 
    swap them. you will put the bigger element in a temp variable, swap the place of the smaller variable
    then put the the temp variable in the place of the smaller variable and you rince and repeat over and 
    over till everything in the array is sorted
*/ 

#include <iostream>

using namespace std;

void sort(int array[], int size){
    int temp;
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(array[j] < array[j + 1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main(){

    int array[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);

    for(int element : array)
    {
        cout << element << " ";
    }

    return 0;
}