#include <stdio.h>
#include <string.h>
#include "roster.h"

void print_student(Student student){
    printf("%d %s %s\n",student.number, student.name, student.school);
}

void print_roster_list(Student student_list[]){
    int i = 0;
    for(i = 0;i < 100; i++){
        if(student_list[i].name[0] == '\0'){
            break;
        }
        print_student(student_list[i]);
    }
}