//
// Created by 175 on 2017/9/15.
//

#ifndef UNTITLED2_QUICKSORT3WAYS_H
#define UNTITLED2_QUICKSORT3WAYS_H

#include <iostream>
#include <ctime>
using namespace std;

template <typename T>
void __quickSort3(T arr[], int l, int r) {
    if (l >= r)
        return;

    // 随机在arr[l...r]的范围中, 选择一个数值作为标定点pivot
    swap( arr[l], arr[rand()%(r-l+1)+l ] );

    T v = arr[l];

    int lt = l;
    int gt = r + 1;
    int i = l;

    while (i < gt) {
        if (arr[i] < v) {
            swap(arr[i],arr[lt]);
            lt++;
            i++;
        } else if (arr[i] > v) {
            swap(arr[i],arr[gt-1]);
            gt--;
        } else {
            i++;
        }
    }

    swap(arr[l],arr[lt]);

    __quickSort3(arr,l,lt-1);
    __quickSort3(arr,gt,r);

}

template <typename T>
void quickSort3 (T arr[],int n) {
    srand(time(NULL));
    __quickSort3(arr,0,n-1);
}

#endif //UNTITLED2_QUICKSORT3WAYS_H
