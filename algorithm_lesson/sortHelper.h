//
// Created by aric.chou on 2017/1/18.
//

#ifndef ALGORITHM_LESSON_SORTHELPER_H
#define ALGORITHM_LESSON_SORTHELPER_H

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <cassert>

using namespace std;
namespace SortHelper{
    int* generateRandomArray(int n,int rangeL,int rangR){
        int *arr= new int[n];
        srand(time(NULL));
        for (int i = 0; i < n; ++i) {
            arr[i]=rand()%(rangR-rangeL+1)+rangeL;
        }
        return arr;
    }
    template <typename  T>
    void printArray(T arr[],int n){
        for (int i = 0; i < n; ++i) {
            cout << arr[i]<<" ";
        }
        cout << endl;
    }

    template <typename T>
    bool isSorted(T arr[],int n){
        for (int i = 0; i < n-1; ++i) {
            if (arr[i]>arr[i+1])
                return false;
        }

        return true;
    }

    template <typename T>
    void testSort(string sortMethodName , void (*sort)(T[],int),T arr[],int n){
        clock_t  startTime = clock();
        sort(arr,n);
        clock_t  endTime=clock();

        assert(isSorted(arr,n));

        cout<<"The sort method:"<<sortMethodName<<" cost time:"<<double(endTime-startTime)/CLOCKS_PER_SEC<<"seconds"<<endl;
    }
}
#endif //ALGORITHM_LESSON_SORTHELPER_H

