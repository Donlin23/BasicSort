//
// Created by tanglabhdl on 2018/6/30.
//

#ifndef SELECTIONSORT_INSERTIONSORT_H
#define SELECTIONSORT_INSERTIONSORT_H

#include <iostream>

using namespace std;

// 插入排序
template <typename T>
void insertionSort(T arr[], int n){

    for (int i = 1; i < n; i++) {
        // 寻找元素arr[i]合适插入的位置
        // 写法1
//        for (int j = i; j > 0 ; j--) {
//            if (arr[j] < arr[j-1]){
//                swap(arr[j], arr[j-1]);
//            }else{
//                break;
//            }
//        }

        // 写法2 更简洁
//        for (int j = i; j > 0 && arr[j] < arr[j-1] ; j--) {
//            swap(arr[j], arr[j-1]);
//        }

        // 写法3，插入排序的改进，减少swap操作
        T temp = arr[i];
        int j;
        for (j = i; j > 0 && temp < arr[j-1]; j--) {
            arr[j] = arr[j-1];
        }
        arr[j] = temp;

    }
    return;
}

#endif //SELECTIONSORT_INSERTIONSORT_H
