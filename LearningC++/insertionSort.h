//
// Created by 175 on 2017/9/12.
//

#ifndef LEARNINGC_INSERTIONSORT_H
#define LEARNINGC_INSERTIONSORT_H
template <typename T>
void insertionSort (T arr[], int n) {
    for (int i = 0; i < n; i++) {
        T e = arr[i];
        int j; //j 保存元素e应该插入的位置
        for (j = i; j > 0 && arr[j - 1] > e; j--) {
            arr[j] = arr[j -1];
        }
        arr[j] = e;
    }
    return;
}
#endif //LEARNINGC_INSERTIONSORT_H
