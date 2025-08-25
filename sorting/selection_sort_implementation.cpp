#include<iostream>
using namespace std;

void selection_sort(int* arr, int size) {
    for(int i = 0; i < size - 1; i++) {
        //declaring ith elem as minimum for now. it changes in every new pass which is last element of sorted array
        int min_idx = i;
        for(int j = i + 1; j < size; j++) {
            if(arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        if(i != min_idx) {
            swap(arr[i], arr[min_idx]);
        }
    }
}

int main() {
    int array[5] = {4, 3, 5, 1, 2};
    selection_sort(array, 5);
    for(int i = 0; i < 5; i++) {
        cout << array[i] << "\n";
    }
    return 0;
}
