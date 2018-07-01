//
// Created by tanglabhdl on 2018/6/30.
//

#ifndef SELECTIONSORT_SELECTIONSORT_H
#define SELECTIONSORT_SELECTIONSORT_H

#include <iostream>

using namespace std;

// 选择排序
// C++的泛型体现：template模板
template <typename T>
void selectionSort(T arr[], int n){
    for (int i = 0; i < n; i++) {

        // 寻找[i,n)区间的最小值位置
        int minIndex = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        // swap是C++ std命名空间内置函数
        swap(arr[i], arr[minIndex]);
    }
}

#endif //SELECTIONSORT_SELECTIONSORT_H
