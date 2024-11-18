#include <iostream>
#include <vector>

using namespace std;
    

int main(){
    vector<string> foods = {"apples", "bananas", "oranges"};
    foods.push_back("carrots"); // adding elemetns
    
    // vector<int> numbers; // you can declare then assign later
    // numbers = {1, 2, 3, 4, 5, 6, 7};
    // numbers.push_back(8); // adding elements


    // for(int i = 0; i < foods.size(); i++){
    //     cout << foods[i] << endl;
    // }
    //                                         // both ways to print elements
    // for (int number : numbers) {
    //     cout << number << endl;
    // }

    //iterators
    //auto is for auto type assignment
    // for(auto it = numbers.begin(); it != numbers.end(); it++){

    //     // cout << it << endl;      // we cannot print the iterator itself 

    //     cout << *it << endl;     // to print the value of the element
    //     cout << &it << endl;     // address of the iterator
    //     cout << &(*it) << endl;  // address of the element

    // }

    vector<int> numbers;
    // numbers.push_back(0);

    for(int i = 1; i <= 10; i++){
        numbers.push_back(i);
    }

    // auto it = numbers.begin();
    // cout << *(it + 5);       // take the iterator and add 5 values to it


    for(auto it = numbers.cbegin(); it != numbers.cend(); it++){        //  cbegin and cend are const iterators, not changeable
        
        // *it = 20;    // cant do this with constant iterators                                                    
        cout << *it << endl;

    }

    cout << "Size: " << numbers.size() << endl;
    cout << "Max size: " << numbers.max_size() << endl;
    cout << "Capacity: " << numbers.capacity() << endl;
    numbers.resize(5);
    cout << "Size: " << numbers.size() << endl;

    if(numbers.empty())
        cout << "Vector is empty\n";
    else    
        cout << "Vector is not empty\n"; 

    cout << "Element [0] is: " << numbers[0] << endl;
    cout << "Element at(0) is: " << numbers.at(0) << endl;
    cout << "Front: " << numbers.front() << endl;
    cout << "Back: " << numbers.back() << endl;
    numbers.clear();


    return 0;
}