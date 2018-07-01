//
// Created by tanglabhdl on 2018/6/29.
//

#ifndef SELECTIONSORT_STUDENT_H
#define SELECTIONSORT_STUDENT_H

#include <iostream>

using namespace std;

struct Student{

    string name;
    int score;

    /**
     * 运算符重载，重载 < ，自定义排序规则
     * @param otherStudent
     * @return
     */
    bool operator<(const Student &otherStudent){

        return score != otherStudent.score ? score > otherStudent.score : name < otherStudent.name;
    }

    /**
     * 运算符重载，重载 << ，自定义字符输出规则
     * @param os
     * @param student
     * @return
     */
    friend ostream& operator<<(ostream &os, const Student &student){

        os<<"Student:"<<student.name<<" "<<student.score<<endl;
        return os;
    }
};



#endif //SELECTIONSORT_STUDENT_H
