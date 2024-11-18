#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

    // string name;

    // cout << "enter name: ";
    // getline(cin, name, '?');  // receives input until '?' in encountered in the input
    // cout << name;

    // ifstream file;
    // file.open("testing.txt");
    
    // string name;

    // while(!file.eof()){
    //     getline(file, name);
    //     cout << name;
    //     cout << endl;
    // }
    // file.close();

    // ofstream file;
    // file.open("testing.txt");

    // string name = "john";
    // int x = 2;
    // int y = 3;
    // int a[3] = {1, 2, 3};

    // file << name << endl;
    // file << "this will go in the file\n";
    // file << a[0] << endl;
    // file << "x + y = " <<  x + y << endl;

    // file.close();

    // ofstream file;
    // file.open("testing.txt", ios::app);

    // file << "this will go in the file as an append, will not overwrite\n";
    // file.close();

    // char fileName[16];
    string fileName;

    ifstream file;

    cout << "Enter file name: ";
    cin >> fileName;

    file.open(fileName);

    string name;

    while(!file.eof()){
        getline(file, name);
        cout << name << endl;;
    }


    return 0;
}