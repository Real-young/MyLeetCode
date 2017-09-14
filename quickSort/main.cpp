#include <iostream>
#include <cassert>
#include <ctime>
using namespace std;


template <typename T>
int __partition(T arr[],int l,int r) {
    T v = arr[l];

    int j = l;

    for (int i = l + 1; i <= r ; i++) {
        if (arr[i] < v) {
            swap(arr[j + 1],arr[i]) ;
            j ++;
        }
    }
    swap(arr[l], arr[j]);
    return j;
}

template <typename T>
void __quickSort(T arr[], int l, int r) {
    if (l >= r)
        return;

    int p = __partition(arr,l,r);
    __quickSort(arr,l,p-1);
    __quickSort(arr,p+1,r);
}


// 生成有n个元素的随机数组,每个元素的随机范围为[rangeL, rangeR]
int *generateRandomArray(int n, int rangeL, int rangeR) {

    assert(rangeL <= rangeR);

    int *arr = new int[n];

    srand(time(NULL));
    for (int i = 0; i < n; i++)
        arr[i] = rand() % (rangeR - rangeL + 1) + rangeL;
    return arr;
}

//打印数组arr的所有内容
template <typename T>
void printArray(T arr[], int n) {
    for(int i = 0; i<n ; i++)
        cout << arr[i] << " ";
    cout << endl;
    return;
}

template <typename T>
void testSort (string sortName, void(*sort)(T[], int), T arr[], int n ) {
    clock_t startTime  = clock();
    sort(arr, n);
    clock_t endTime = clock();
    cout << sortName << ":" << double(endTime - startTime) / CLOCKS_PER_SEC << "s" << endl;
    return;
}

template <typename T>
void quickSort(T arr[],int n) {
    __quickSort(arr, 0, n - 1);
}

int main() {

    int n = 100000;
    int *arr = generateRandomArray(n,0,n);
    cout << "before: ";
//    printArray(arr,n);
    quickSort(arr,n);
    cout<< "after: ";
//    printArray(arr, n);

    testSort("qsort",quickSort,arr,n);

    delete[] arr;
    return 0;
}