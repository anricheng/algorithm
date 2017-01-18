#include <iostream>
#include <algorithm>
#include "selectSort.h"
#include "Student.h"
int main() {

    //selectSort verify start

    int arr[10]={1,4,3,8,0,9,5,2,6,7};

    float arr1[10]={1.4,4.0,3.2,8.5,0.6,9.8,5.6,2.6,6.9,7.0};

    selectionSort(arr,10);
    for (int i = 0; i < 10; ++i) {
        cout<<arr[i]<<"  ";
    }



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

    return 0;
}