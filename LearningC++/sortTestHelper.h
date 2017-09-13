//
// Created by 175 on 2017/9/6.
//

#ifndef LEARNINGC_SORTTESTHELPER_H
#define LEARNINGC_SORTTESTHELPER_H

#include <iostream>
#include <ctime>
#include <cassert>
using namespace std;


namespace sortTestHelper {
    // 生成有n个元素的随机数组,每个元素的随机范围为[rangeL, rangeR]
    int *generateRandomArray(int n, int rangeL, int rangeR) {
        assert (rangeL <= rangeR);
        int *arr = new int[n];
        srand(time(NULL));
        for (int i = 0; i < n ; i++) {
            arr[i] = rand() % (rangeR - rangeL + 1) + rangeL;
        }
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
    bool isSorted (T arr[], int n) {
        for (int i = 0; i < n - 1; i++)
            if (arr[i] > arr[i + 1])
                return false;
        return true;
    }

    // 生成一个近乎有序的数组
    // 首先生成一个含有[0...n-1]的完全有序数组, 之后随机交换swapTimes对数据
    // swapTimes定义了数组的无序程度:
    // swapTimes == 0 时, 数组完全有序
    // swapTimes 越大, 数组越趋向于无序
    int *generateNearlyOrderedArray(int n, int swapTimes){

        int *arr = new int[n];
        for(int i = 0 ; i < n ; i ++ )
            arr[i] = i;

        srand(time(NULL));
        for( int i = 0 ; i < swapTimes ; i ++ ){
            int posx = rand()%n;
            int posy = rand()%n;
            swap( arr[posx] , arr[posy] );
        }

        return arr;
    }

    // 拷贝整型数组a中的所有元素到一个新的数组, 并返回新的数组
    int *copyIntArray(int a[], int n){

        int *arr = new int[n];
        //* 在VS中, copy函数被认为是不安全的
        copy(a, a+n, arr);
        return arr;
    }

    template <typename T>
    void testSort (string sortName, void(*sort)(T[], int), T arr[], int n ) {
        clock_t startTime  = clock();
        sort(arr, n);
        clock_t endTime = clock();
        cout << sortName << ":" << double(endTime - startTime) / CLOCKS_PER_SEC << "s" << endl;
        return;
    }
}
#endif //LEARNINGC_SORTTESTHELPER_H
