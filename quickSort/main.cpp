#include <iostream>
#include "sortTestHelper.h"
#include "quickSort.h"
#include "quickSort2Ways.h"
using namespace std;



int main() {

    int n = 10000000;
    int *arr = sortTestHelper::generateRandomArray(n,0,n);
    int *copyArr = sortTestHelper::copyIntArray(arr,n);
    cout << "before: ";
//    printArray(arr,n);
//    quickSort(arr,n);
    cout<< "after: ";
//    printArray(arr, n);

    sortTestHelper::testSort("qsort",quickSort,arr,n);
    sortTestHelper::testSort("qsort2",quickSort2,copyArr,n);

    delete[] arr;
    delete[] copyArr;
    return 0;
}