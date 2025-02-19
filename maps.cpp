#include <iostream>
// #include <unordered_map>
#include <map>
#include <string>

using namespace std;

int main(){
    //a way to initialize a map
    //mapping a string to an integer
    //here we're mapping a name to an id
    map<string, int> myMap1;
    myMap1["Kevin"] = 123;      //adding or changing elements to the map
    myMap1["John"] = 345;
    myMap1["stacy"] = 678;

    //another way to intialize a map
    //std::map<std::string, int> myMap2 = 
    map<string, int> myMap2 = 
    {
        {"Steve", 332},
        {"Ben", 223}, 
        {"Rose", 531},
    };

    //accessing values in a map
    int val1 = myMap1.at("Kevin");
    int val2 = myMap1["Kevin"];


    //inserting a value in a map
    myMap1.insert({"mark", 23});    //insert makes a copy while emplace makes an object in place
    myMap1.emplace("Amy", 2231);
    myMap1.insert(pair<string,int>("Dev", 12341));

    //removing
    //you pass the "key" you want to erase
    myMap1.erase("John");

    //accessing all values in a map
    //you can also do auto& to pass by reference
    for(auto element : myMap1){
        cout << element.first << " : " << element.second << endl;
    }

    cout << myMap1.size();
    
    //myMap1.clear()  clears all elements in a map

    cout << endl;
    cout << endl;
    cout << endl;

    for(auto element : myMap2){
        cout << element.first << " : " << element.second << endl;
    }

    cout << endl;
    cout << endl;
    cout << endl;


    //to see if an element is in the map
    auto check = myMap1.find("Amy");
    if(check == myMap1.end()){
        cout << "not found" << endl;
    }
    else{
        cout << "found" << endl;
    }




    // unordered_map<string, string> unorderedMap;
    // unorderedMap.insert(pair<string, string>("ross", "ricker"));
    // unorderedMap.insert(pair<string, string>("ben", "benisson"));

    // for(auto name : unorderedMap){
    //     cout << name.first << " " << name.second << endl;
    // }



    return 0;
}