//
// Created by 175 on 2017/9/14.
//

#ifndef QUICKSORT_QUICKSORT_H
#define QUICKSORT_QUICKSORT_H

#include <iostream>
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


template <typename T>
void quickSort(T arr[],int n) {
    __quickSort(arr, 0, n - 1);
}
#endif //QUICKSORT_QUICKSORT_H
