//Nguyen Long Duong 20200121- Bai 04 - 1.1a

#include<iostream>
using namespace std;

// Insertion Sort

void printArray(int array[], int size){
  for(int i = 0; i < size; i++){
    cout << array[i] << " ";
  }
}
void insertionSort(int array[], int size){ //Sap xep theo thu tu khong giam
  int key;
  int j;
  for(int i = 1; i < size; i++){
    key = array[i];
    j = i - 1;
    while(j >= 0 && key < array[j]){
      array[j+1] = array[j];
      j--;
    }
    array[j+1] = key;
  }
}

int main(){
  int data[] = {2, 1, 6, 5, 10};
  int size = sizeof(data) / sizeof(data[0]);
  insertionSort(data, size);
  printArray(data, size);
  return 0; 
}
