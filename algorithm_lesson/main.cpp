#include <iostream>
#include <algorithm>
#include "selectSort.h"
#include "Student.h"
#include "sortHelper.h"
#include "insertSort.h"
int main() {

    //selectSort verify start
    int n =100;
    int *arr = SortHelper::generateRandomArray(n,0,n);

    int* arrInsert = arr;
    float arr1[10]={1.4,4.0,3.2,8.5,0.6,9.8,5.6,2.6,6.9,7.0};
    selectionSort(arr,n);
    SortHelper::testSort("selectionSort",selectionSort,arr,n);
    SortHelper::printArray(arr,n);



    cout<<endl;
    selectionSort(arr1,10);

    for (int i = 0; i < 10; ++i) {
        cout<<arr1[i]<<"  ";
    }
    cout<<endl;

    Student students[4]={{"haifeng",4},{"haibo",4},{"Lianchu",6},{"quanying",7}};

    selectionSort(students,4);

    for (int j = 0; j < 4; ++j) {
        cout<<students[j]<<endl;

    }
    //selectSort verify end;


    /**
     * insertSort test start
     */

    insertSort(arrInsert,n);
    SortHelper::testSort("insertSort",insertSort,arrInsert,n);
    SortHelper::printArray(arrInsert,n);


    return 0;
}