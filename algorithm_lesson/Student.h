//
// Created by aric.chou on 2017/1/18.
//

#ifndef ALGORITHM_LESSON_STUDENT_H
#define ALGORITHM_LESSON_STUDENT_H

#include <iostream>
#include <string>
using  namespace std;

struct Student{
    string name;
    int score;

    bool operator<(const Student &otherStudent){
        return score<otherStudent.score;
    }

    friend ostream&operator<<(ostream &os, const Student &student){
        os<<"Student: "<<student.name<<" "<<student.score<<endl;
        return os;
    }
};
#endif //ALGORITHM_LESSON_STUDENT_H
