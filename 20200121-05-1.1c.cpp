// Nguyen Long Duong 20200121 - Bai 05 - 1.1c

// Bubble Sort

#include<iostream>
using namespace std;

void printArray(int array[], int size){
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
}

void bubbleSort(int array[], int size){
    for(int i = 0; i < size; i++){
        int swapped = 0;
        for(int j = 0; j < size - i; j++){
            if(array[j] > array[j+1]){
                int bien = array[j];
                array[j] = array[j+1];
                array[j+1] = bien;
                swapped = 1;
            }
        }
        if(swapped == 0)
            break;
    }
}

int main(){
    int data[] = {3, 1, 5, 9, 6, 4};
    int size = sizeof(data) / sizeof(data[0]);
    bubbleSort(data, size);
    printArray(data, size);
    return 0;
}