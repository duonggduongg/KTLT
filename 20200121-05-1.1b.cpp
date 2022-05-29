// Nguyen Long Duong 20200121 - Bai 05 - 1.1b

// Selection Sort

#include<iostream>
using namespace std;

void printArray(int array[], int size){
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
}

void selectionSort(int array[], int size){
    int minindex;
    int bien;
    for(int i = 0; i < size; i++){
        minindex = i;
        for(int j = i+1; j < size; j++){
            if(array[j] < array[minindex]) minindex = j;
        }
        bien = array[i];
        array[i] = array[minindex];
        array[minindex] = bien;
    }
}

int main(){
    int data[] = {9, 1, 5, 3, 6};
    int size = sizeof(data) / sizeof(data[0]);
    selectionSort(data, size);
    printArray(data, size);
    return 0;
}