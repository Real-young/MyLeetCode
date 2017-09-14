//
// Created by 175 on 2017/9/14.
//

#ifndef UNTITLED2_QUICKSORT2WAYS_H
#define UNTITLED2_QUICKSORT2WAYS_H

#include <iostream>
#include <ctime>
using namespace std;
//2路快排
template <typename  T>
int __partition2(T arr[], int l, int r) {
// 随机在arr[l...r]的范围中, 选择一个数值作为标定点pivot
    swap( arr[l] , arr[rand()%(r-l+1)+l] );
    T v = arr[l];


    // arr[l+1...i) <= v; arr(j...r] >= v
    int i = l + 1, j = r;
    while (true) {
        while (i <= r && arr[i] < v)
            i++;

        while (j > l + 1 && arr[j] > v)
            j--;

        if (i > j)
            break;

        swap(arr[i], arr[j]);
        i ++;
        j --;
    }

    swap(arr[i], arr[j]);
    return j;

}

template <typename T>
void __quickSort2(T arr[], int l, int r) {
    srand(time(NULL));
    __partition2(arr,l,r);
}

template <typename T>
void quickSort2(T arr[],int n) {
    __quickSort2(arr,0,n-1);
}

#endif //UNTITLED2_QUICKSORT2WAYS_H
