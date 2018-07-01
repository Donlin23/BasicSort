//
// Created by tanglabhdl on 2018/7/1.
//

#ifndef SELECTIONSORT_BUBBLESORT_H
#define SELECTIONSORT_BUBBLESORT_H

#include <iostream>

using namespace std;

// 冒泡排序
template <typename T>
void bubbleSort(T arr[], int n){

    // 常规写法
//    for (int i = 0; i < n - 1; i++) {
//        for (int j = 0; j < n - 1 - i; j++) {
//            if (arr[j] > arr[j+1]){
//                swap(arr[j], arr[j+1]);
//            }
//        }
//    }

    // 可以设计记录标志，记录当前一次的顺序，如果已经不需要交换了，可以提前结束循环
    for (int k = 0; k < n - 1; k++) {
        bool swapFlag = false;
        for (int h = 0; h < n - 1 - k; h++) {
            if (arr[h] > arr[h+1]){
                swap(arr[h], arr[h+1]);
                swapFlag = true;
            }
        }
        if (!swapFlag){
            break;
        }
    }
    return;
}


#endif //SELECTIONSORT_BUBBLESORT_H
