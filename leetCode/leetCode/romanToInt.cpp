#include "romanToInt.h"
#include <map>


int romanToInt(string s) {
    map <char, int> roman_values = { 
        {'M', 1000}, 
        {'D', 500}, 
        {'C', 100}, 
        {'L', 50}, 
        {'X', 10}, 
        {'V', 5}, 
        {'I', 1}};

    int result = 0;
    for (int i = 0; i < s.size(); i++) {
        if (roman_values[s[i]] < roman_values[s[i + 1]]) {
            result -= roman_values[s[i]];
        }
        else {
            result += roman_values[s[i]];
        }
    }
    return result;


}


void romanToInt() {

    print("\n");
    
    string s = "IVI";
    int val = romanToInt(s);
    print("Roman 'IVI' to int:",val);

    print("\n");


}