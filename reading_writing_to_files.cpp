#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

     
    fstream file;

    file.open("testing.txt", ios::out);   // to write into a text file
    if( file.is_open() ){
        file << "this will be put in the text file\n";      // use the fstream name u put instead of cout
        file << "this will also be put in the text file\n";
        file.close();
    }

    file.open("testing.txt", ios::app);   // to append, because if you use out mode then 
    if( file.is_open() ){                 // your previous text in the file will be overwritten
        file << "hello there\n";      
        file.close();
    }

    file.open("testing.txt", ios::in);  // to read from a text file
    if(file.is_open()){
        string line;
        while(getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    }

    return 0;
}