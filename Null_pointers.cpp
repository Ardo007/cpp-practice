# include <iostream>

using namespace std;

int main(){

    //NULL value = a special value that means something has no value.
    //             when a pointer is holding a null value,
    //             that pointer is not pointing at anything (null pointer)

    // nullptr = keyword that represents a nunll pointer literal

    // nullptrs are helpful when determining if an adrress 
    // was successfully assigned to a pointer 

    // when using pointers, be careful that your code isn't 
    // dereferencing nullptr or pointing to free memory
    // this will cause undefined behaivour 

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if (pointer == nullptr){
        cout << "address was not assigned\n";
        
    }
    else {
        cout << "address was assigned\n";
        cout << *pointer;
    }

    return 0;
}