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

void printVector(vector<int> arr);
void printVector(string fxName, vector<int> arr);