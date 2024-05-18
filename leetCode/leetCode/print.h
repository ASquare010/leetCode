#pragma once
#include <cstdarg>
#include <iostream>
#include <vector>

using namespace std;


void print();

template<typename T, typename... Args>
void print(T&& first, Args&... rest) {
    cout << first << " ";
    print(forward<Args>(rest)...);
}

template<typename T>
void printVector(vector<T> arr){
    for (const auto& element : arr) {
        print(element);
    }
}
void printVector(string fxName, vector<int> arr);