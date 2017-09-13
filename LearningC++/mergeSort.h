//
// Created by 175 on 2017/9/13.
//

#ifndef LEARNINGC_MERGESORT_H
#define LEARNINGC_MERGESORT_H

#include "iostream"
using namespace std;

template <typename  T>
void __merge(T arr[], int l, int mid, int r) {

    //VS不支持动态长度数组, 即不能使用 T aux[r-l+1]的方式申请aux的空间
    //使用VS的使用new的方式申请aux空间
    //使用new申请空间, 不要忘了在__merge函数的最后, delete掉申请的空间:)
    T aux[r-l+1];
    //T *aux = new T[r-l+1];


    for (int i = l; i <= r; i++)
        aux[i-l] = arr[i];

    int i = l, j = mid + 1;
    for (int k = l; k <= r; k++) {
        if (i > mid) {
            arr[k] = aux[j - l];
            j++;
        } else if (j > r){
            arr[k] = aux[i - l];
            i++;
        } else if (aux[i - l] < aux[j - l]) {
            arr[k] = aux[i - l];
            i++;
        } else {
            arr[k] = aux[j - l];
            j++;
        }
    }
}

template <typename T>
void __mergeSort(T arr[], int l, int r) {
    if (l >= r) {
        return;
    }

    int mid = (l+r)/2;

    __mergeSort(arr,l,mid);
    __mergeSort(arr,mid+1,r);
    __merge(arr,l,mid,r);
}



template <typename T>
void mergeSort(T arr[], int n) {
    __mergeSort(arr, 0, n-1);
}

#endif //LEARNINGC_MERGESORT_H
