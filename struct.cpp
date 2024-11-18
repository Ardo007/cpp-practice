#include <iostream>

using namespace std;

struct student{
    string name;
    double gpa;
    bool enrolled;
};

int main(){

    // struct = A structure that group related variables under one name
    //          structs can contain many different data types (string, bool, int)
    //          variables in a struct are known as "members"
    //          members can be accessed with . "Class member access operator"

    student student1;
    student1.name = "spongebob";
    student1.gpa = 3.2;
    student1.enrolled = true;

    student student2;
    student2.name = "patrick";
    student2.gpa = 2.1;
    student2.enrolled = true;

    cout << student2.name << '\n';
    cout << student2.gpa << '\n';
    cout << student2.enrolled << '\n';

    return 0;
}