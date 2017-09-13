#include <iostream>
#include "sortTestHelper.h"
//#include "insertionSort.h"
#include "mergeSort.h"
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

    int n = 100;
    int *arr = sortTestHelper::generateRandomArray(n,0,n);
//    int *copyArr = sortTestHelper::copyIntArray(arr,n);
    mergeSort(arr,n);
    sortTestHelper::printArray(arr,n);
//    selectionSort(arr,n);
//    for (int i = 0; i < n; i++) {
//        cout << arr[i] << "";
//        cout << endl;
//    }

//    sortTestHelper::testSort("Selecetion Test",selectionSort,arr,n);
//    sortTestHelper::testSort("insertion Test",insertionSort,copyArr,n);
//    sortTestHelper::testSort("mergeSort",mergeSort,arr,n);
    //开辟了数组空间 需要释放
    delete[] arr;
//    delete[] copyArr;
    return 0;
}