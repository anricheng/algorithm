//
// Created by aric.chou on 2017/1/18.
//

#ifndef ALGORITHM_LESSON_INSERTSORT_H
#define ALGORITHM_LESSON_INSERTSORT_H
#include <iostream>
#include <algorithm>
using  namespace std;
template <typename  T>
void insertSort(T arr[],int n){
  for(int i=1;i<n;i++){
      T e =arr[i];
      int j;//当前的元素应该插入的位置;
     for(int j=i;j>0;j--){
        if(arr[j]<arr[j-1]){
          swap(arr[j],arr[j-1]);
        }else{
           break;
        }
     }
  }
}
#endif //ALGORITHM_LESSON_INSERTSORT_H
