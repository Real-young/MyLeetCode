#include <iostream>
#include "sortTestHelper.h"
using namespace std;


//使用模板
template<typename T>
void selectionSort (T arr[] , int n) {
    for (int i = 0; i < n; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
            swap(arr[i],arr[minIndex]);
        }
    }
}

int main() {

    int n = 100000;
    int *arr = sortTestHelper::generateRandomArray(n,0,n);
//    selectionSort(arr,n);
//    for (int i = 0; i < n; i++) {
//        cout << arr[i] << "";
//        cout << endl;
//    }

    sortTestHelper::testSort("Selecetion Test",selectionSort,arr,n);

    //开辟了数组空间 需要释放
    delete[] arr;
    return 0;
}