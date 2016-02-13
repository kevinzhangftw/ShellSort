//
//  main.cpp
//  shellSort
//
//  Created by Kevin Zhang on 2016-02-09.
//  Copyright © 2016 Kevin Zhang. All rights reserved.
//

#include <iostream>
using namespace std;


void printArray(int arr[], int arr_size);
int shellSort(int arr[], int arr_size);

int main(int argc, const char * argv[]) {
    // insert code here...
    int arr[5] = {3,1,2,5,4};
    int arr_size = 5;
    printArray(arr, arr_size);
    shellSort(arr, arr_size);
    printArray(arr, arr_size);
    cout << "Hello, World!\n";
    return 0;
}

void printArray(int arr[], int arr_size){
    //read every element of the array
    for (int i = 0; i<arr_size; ++i) {
        cout<< " " <<arr[i];
    }
    //print out that element
}

int shellSort(int arr[], int arr_size){
    int barOps=0;
    //
    return barOps;
}
