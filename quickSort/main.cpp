#include <iostream>
#include "sortTestHelper.h"
#include "quickSort.h"
using namespace std;



int main() {

    int n = 1000000;
    int *arr = sortTestHelper::generateRandomArray(n,0,n);
    cout << "before: ";
//    printArray(arr,n);
//    quickSort(arr,n);
    cout<< "after: ";
//    printArray(arr, n);

    sortTestHelper::testSort("qsort",quickSort,arr,n);

    delete[] arr;
    return 0;
}