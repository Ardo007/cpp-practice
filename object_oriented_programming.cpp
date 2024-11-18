#include <iostream>

using namespace std;

class Human{
    public:
        string name;
        string occupatiton;
        int age;

        void eat(){
            cout << "this person is eating\n";
        }

        void drink(){
            cout << "this person is dringing\n";
        }

        void sleep(){
            cout << "this person is sleeping\n";
        }
};


int main(){ 

    // object = A collection of attributes and methods
    //          they can have characteristics and could perform actions
    //          can be used to mimic real world items (ex. phone, book)
    //          created from a class which acts as a "blueprint"

    Human human1;

    human1.name = "Rick";
    human1.occupatiton = "scientist";
    human1.age = 70;

    cout << human1.name << endl;
    cout << human1.occupatiton << endl;
    cout << human1.age << endl;


    human1.eat();

    human1.drink();
    human1.sleep();

    return 0;
}