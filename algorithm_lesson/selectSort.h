//
// Created by aric.chou on 2017/1/18.
//

#ifndef ALGORITHM_LESSON_SELECTSORT_H
#define ALGORITHM_LESSON_SELECTSORT_H
#include <iostream>
#include <algorithm>
using  namespace std;
template <typename  T>
void  selectionSort(T arr[], int n){
    for (int i = 0; i < n; ++i) {
        int minIndex=i;

        for (int j = i+1; j <n ; ++j) {
            if (arr[j]<arr[minIndex])
                minIndex=j;
        }

        swap(arr[i],arr[minIndex]);
    }

}
#endif //ALGORITHM_LESSON_SELECTSORT_H
