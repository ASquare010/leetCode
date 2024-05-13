#include "baseSorting.h"


//n^2
vector<int> bubbleSort(vector<int> arr) {
    
    bool swapped = 0;

    for (int i = 0; i < arr.size()-1; i++){
        
        swapped = false;

        for (int j = 0; j < arr.size()-i-1; j++){

            if (arr[j+1] < arr[j]){

                swap(arr[j + 1], arr[j]);

                swapped = true;
            }
            
        }
        if (swapped==0) 
            break;
        
    }

    return arr;
}

//n^2
vector<int> selectionSort(vector<int> arr) {

    int min = 0;

    for (int i = 0; i < arr.size() - 1; i++) {

        min = i;

        for (int j = i + 1; j < arr.size(); j++) {

            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        if (min != i) {
            swap(arr[min], arr[i]);
        }
    }

    return arr;
}


//n^2
vector<int> insertionSort(vector<int> arr) {
    
    int i, key, j;
    for (i = 1; i < arr.size(); i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    return arr;
}

bool palindrome(const string val) {

    for (int i = 0; i < (int)val.length()/2; i++)
    {
        if (!(val[i] == val[val.length() - i-1]))
        {
            return false;
        }
    }

    return true;
}



void baseSorting() {

    print("\n");
    vector<int> arr = { 9,0,7,4,2,5,6,8,1,3 };    
    arr = insertionSort(arr);
    printVector("insertionSort: ", arr);

    print("\n");

    arr = { 9,0,7,4,2,5,6,8,1,3 };
    arr = selectionSort(arr);
    printVector("selectionSort: ", arr);

    print("\n");

    arr = { 9,0,7,4,2,5,6,8,1,3 };
    arr = bubbleSort(arr);
    printVector("bubbleSort: ", arr);

    print("\n");
}
