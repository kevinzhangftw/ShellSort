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
    shellSort(arr, arr_size);
    printArray(arr, arr_size);
    return 0;
}

int shellSort(int arr[], int arr_size){
    int barOps=0;
    int gap = 0;
    int i = 0;
    int j = 0;
    int temp = 0;
    
    for (gap = arr_size/2; gap>0; gap/=2) {
        for (i=gap; i<arr_size; ++i) {
            for (j=i-gap; j>=0 && arr[j]>arr[j+gap]; j-=gap) {
                temp = arr[j];
                arr[j] = arr[j+gap];
                arr[j+gap] = temp;
            }
        }
    }
    return barOps;
}

void printArray(int arr[], int arr_size){
    //read every element of the array
    for (int i = 0; i<arr_size; ++i) {
        cout<< " " <<arr[i];
    }
    //print out that element
}
