#include <iostream>
using namespace std;

int numberVal(char num){
    switch (num)
    {
    case 'I':
        return 1;
        break;
    case 'V':
        return 5;
        break;
    case 'X':
        return 10;
        break;
    case 'L':
        return 50;
        break;
    case 'C':
        return 100;
        break;
    case 'D':
        return 500;
        break;
    case 'M':
        return 1000;
        break;
    default:
        return 0;
        break;
    }
}

int romanToInt(string s){
    int ans = 0;
    int curVal = 0;
    for(int i = s.length(); i >= 0; i--){
        
        if(numberVal(s[i]) >= curVal ){
            ans += numberVal(s[i]);
        }
        else{
            ans -= numberVal(s[i]);
        }
        curVal = numberVal(s[i]);
    }
    return ans;
}

int main(){

    string number {};
    cout << "enter a roman numeral: ";
    cin >> number; 
    cout << endl;

    int answerNum = romanToInt(number);
    cout << "your answer is: " << answerNum << endl;

    return 0;
}