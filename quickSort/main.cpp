#include <iostream>
#include "sortTestHelper.h"
#include "quickSort.h"
#include "quickSort3Ways.h"
#include "quickSort2Ways.h"
using namespace std;



int main() {

    int n = 10000000;
    int *arr = sortTestHelper::generateRandomArray(n,0,n);
    int *copyArr = sortTestHelper::copyIntArray(arr,n);
    int *copyArr2 = sortTestHelper::copyIntArray(arr,n);
    cout << "before: ";
//    printArray(arr,n);
//    quickSort(arr,n);
    cout<< "after: ";
//    printArray(arr, n);

    sortTestHelper::testSort("qsort",quickSort,arr,n);
    sortTestHelper::testSort("qsort2",quickSort2,copyArr,n);
    sortTestHelper::testSort("qsort3",quickSort3,copyArr2,n);

    delete[] arr;
    delete[] copyArr;
    return 0;
}