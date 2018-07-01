//
// Created by tanglabhdl on 2018/7/1.
//

#ifndef SELECTIONSORT_SHELLSORT_H
#define SELECTIONSORT_SHELLSORT_H

#include <iostream>

using namespace std;

// 希尔排序
template <typename T>
void shellSort(T arr[], int n){

    int h = 1;          // 设置增量（或者称为步长）
    while(h < n/2){     // 保证增量的稳步递减
        h = h * 2 + 1;
    }

    while(h >= 1){

        // h = 1 的时候就是完完全全的插入排序
        for (int i = h ; i < n; i++) {
            // 对 arr[i]、arr[i-h]、arr[i-2h]... 进行插入排序，从后往前遍历
            T temp = arr[i];
            int j;
            for ( j = i; j >= h && arr[j-h] > temp; j-=h) {
                arr[j] = arr[j-h];
            }
            arr[j] = temp;

        }

        h /= 2;     //逐步减少增量
    }

    return;
}


#endif //SELECTIONSORT_SHELLSORT_H
