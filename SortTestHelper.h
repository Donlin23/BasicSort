//
// Created by tanglabhdl on 2018/6/29.
//

#ifndef SELECTIONSORT_SORTTESTHELPER_H
#define SELECTIONSORT_SORTTESTHELPER_H

#include <iostream>
#include <ctime>
#include <cassert>
#include <string>

using namespace std;

// 声明SortTestHelper这样一个命名空间
namespace SortTestHelper{

    /**
     * 生成有n个元素的随机数组，每个元素的随机范围为[rangeL, rangeR]
     * @param n
     * @param rangeL
     * @param rangeR
     * @return
     */
    int* generateRandomArray(int n, int rangeL, int rangeR){

        assert( rangeL <= rangeR);

        int *arr = new int[n];
        srand(time(NULL));
        for (int i = 0; i < n; i++) {
            arr[i] = rand() % (rangeR - rangeL + 1) + rangeL;
        }
        return arr;

    }

    /**
     * 打印泛型数组
     * @tparam T
     * @param arr
     * @param n
     */
    template <typename T>
    void printArray(T arr[], int n){

        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        return;
    }

    /**
     *  判断该数组是不是按大小排序的
     * @tparam T
     * @param arr
     * @param n
     * @return
     */
    template <typename T>
    bool isSorted(T arr[], int n){

        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]){
                return false;
            }
        }
        return true;
    }

    /**
     *  测试sort排序算法排序arr数组所得到的正确性和算法运行时间
     * @tparam T
     * @param sortName
     * @param sort
     * @param arr
     * @param n
     */
    template <typename T>
    void testSort( string sortName, void(*sort)(T[], int), T arr[], int n){

        clock_t startTime = clock();
        sort(arr, n);
        clock_t endTime = clock();

        assert(isSorted(arr, n));// 验证算法正确性
        cout<<sortName<<" : "<< (double(endTime - startTime) /
                               CLOCKS_PER_SEC) << " s" <<endl;
        return;
    }

    /**
     * 拷贝整形数组a中的所有元素到一个新的数组，并返回新的数组
     * @param a
     * @param n
     * @return
     */
    int* copyIntArray(int a[], int n){

        int* arr = new int[n];
        copy(a, a + n, arr);

        return arr;
    }

    /**
     * 生成一个近乎有序的数组
     * 首先生成一个含有[0...n-1]的有序数组，之后随机交换swapTime对数据
     * @param n
     * @param swapTimes
     * @return
     */
    int *generateNearlyOrderedArray(int n, int swapTimes){

        int *arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = i;
        }
        srand(time(NULL));

        for (int j = 0; j < swapTimes; j++) {
            int posx = rand() % n;
            int posy = rand() % n;
            swap(arr[posx], arr[posy]);
        }

        return arr;
    }

}


#endif //SELECTIONSORT_SORTTESTHELPER_H
