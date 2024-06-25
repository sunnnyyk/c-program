/*Write a C program to define a structure struct Date with members day, 
month, and year, and another structure struct Student with members name 
and birthdate of type struct Date. Create a Student variable, initialize
 it with values, and print the student's details including the birthdate.*/

#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    char name[50];  
    struct Date birthdate;
};

int main() {
    struct Student student;

    strcpy(student.name, "sunny"); 
    student.birthdate.day = 26;
    student.birthdate.month = 1;
    student.birthdate.year = 2001;

    printf("Student's Name: %s\n", student.name);
    printf("Birthdate: %d-%d-%d\n", student.birthdate.year, student.birthdate.month, student.birthdate.day);

    return 0;
}
