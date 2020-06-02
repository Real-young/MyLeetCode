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
    swap( arr[l] , arr[rand()%(r-l+1)+l] ); // 随机取一个放在最前面
    T v = arr[l];


    // arr[l+1...i) <= v; arr(j...r] >= v
    int i = l + 1, j = r;  // 左边从 l+1 开始。 右边从最右边 r 开始
    while (true) {
        while (i <= r && arr[i] < v)
            i++;  // 左边的值小。 直接不处理。i++

        while (j > l + 1 && arr[j] > v)
            j--;  // 右边的值大。 直接不处理。j--

        if (i > j) // 越界 break
            break;

        swap(arr[i], arr[j]);  // 跳出 while 循环的时候说明 左边的值 比目标值大 右边的值比目标值小 直接 swap 交换 继续循环
        i ++;
        j --;
    }

    swap(arr[i], arr[j]); // 循环到最后 最后交换
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
