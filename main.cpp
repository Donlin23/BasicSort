//#include "Student.h"
#include "SortTestHelper.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "BubbleSort.h"
#include "ShellSort.h"

using namespace std;

int main() {

    int n = 50000;
    int *arr1 = SortTestHelper::generateRandomArray(n, 0 ,n);
    int *arr2 = SortTestHelper::copyIntArray(arr1, n);
    int *arr3 = SortTestHelper::copyIntArray(arr1, n);
    int *arr4 = SortTestHelper::copyIntArray(arr1, n);

    // 测试1：一般测试
    cout << "Test for random array, size = " << n << ", random range [0, " << n <<"]"<<endl;
    // 测试selectionSort
    SortTestHelper::testSort("selection Sort", selectionSort, arr1, n);
    // 测试insertionSort
    SortTestHelper::testSort("insertion Sort", insertionSort, arr2, n);
    // 测试BubbleSort
    SortTestHelper::testSort("bubble Sort", bubbleSort, arr3, n);
    // 测试ShellSort
    SortTestHelper::testSort("shell Sort", shellSort, arr4, n);


    delete[] arr1;
    delete[] arr2;
    delete[] arr3;
    delete[](arr4);
    cout << endl;


    //测试2：近乎有序的测试
    int swapTime = 100; //表示近似有序数据的近似程度
    int *arr6 = SortTestHelper::generateNearlyOrderedArray(n, swapTime);
    int *arr7 = SortTestHelper::copyIntArray(arr6, n);
    int *arr8 = SortTestHelper::copyIntArray(arr6, n);
    int *arr9 = SortTestHelper::copyIntArray(arr6, n);

    cout << "Test for nearly ordered array, size = " << n << ", swap time = "<< swapTime << endl;
    // 测试selectionSort
    SortTestHelper::testSort("selection sort", selectionSort, arr6, n);
    // 测试insertionSort
    SortTestHelper::testSort("insertion sort", insertionSort, arr7, n);
    // 测试bubbleSort
    SortTestHelper::testSort("bubble sort", bubbleSort, arr8, n);
    // 测试shellSort
    SortTestHelper::testSort("shell sort", shellSort, arr9, n);

    delete[] arr6;
    delete[] arr7;
    delete[](arr8);
    delete[](arr9);
    cout << endl;



//    // 对整形数组进行排序
//    int a[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
//    BasicSort(a, 10);
//    for (int i = 0; i < 10; i++) {
//        cout << a[i] << " ";
//    }
//    cout << endl;
//
//    // 对浮点数组进行排序
//    float b[4] = { 4.4, 3.3, 2.2, 1.1};
//    BasicSort(b, 4);
//    for (int i = 0; i < 4; i++) {
//        cout << b[i] << " ";
//    }
//    cout << endl;
//
//    // 对字符数组进行排序
//    string c[4] = { "D", "C", "B", "A"};
//    BasicSort(c, 4);
//    for (int i = 0; i < 4; i++) {
//        cout << c[i] << " ";
//    }
//    cout << endl;
//
//    // 对自定义结构数组进行排序
//    Student d[4] = { {"D", 90}, {"C", 100}, {"B", 95}, {"A", 95}};
//    BasicSort(d, 4);
//    for (int i = 0; i < 4; i++) {
//        cout << d[i] << " ";
//    }
//    cout << endl;

    return 0;
}