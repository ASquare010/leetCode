#include "print.h"

void print() {
    
}

void printVector(vector<int> arr) {

    for (int i = 0; i < arr.size(); i++) {
        print(arr[i]);
    }
}

void printVector(string fxName, vector<int> arr) {

    print(fxName);
    for (int i = 0; i < arr.size(); i++) {
        print(arr[i]);
    }
}