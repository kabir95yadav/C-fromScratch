#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Exercise: Student Grade Management System

Implement a simple student grade management system that:
1. Stores student information (name, ID, grades)
2. Calculates average grades
3. Finds highest and lowest scores
4. Saves student data to a file
5. Reads student data from a file

Complete the TODOs below to implement the system.
*/

#define MAX_NAME 50
#define MAX_STUDENTS 100

struct Student
{
    char name[MAX_NAME];
    int id;
    float grades[3]; // Three grades per student
    float average;
};

// TODO: Implement this function to calculate student's average grade
float calculateAverage(float grades[3])
{
    // Your code here
    return 0.0;
}

// TODO: Implement this function to find the student with highest average
struct Student *findTopStudent(struct Student students[], int count)
{
    // Your code here
    return NULL;
}

// TODO: Implement this function to save students to a file
void saveToFile(struct Student students[], int count, const char *filename)
{
    // Your code here
}

// TODO: Implement this function to load students from a file
int loadFromFile(struct Student students[], const char *filename)
{
    // Your code here
    return 0;
}

int main()
{
    struct Student students[MAX_STUDENTS];
    int studentCount = 0;

    // Test data
    strcpy(students[0].name, "John Doe");
    students[0].id = 1001;
    students[0].grades[0] = 85.5;
    students[0].grades[1] = 90.0;
    students[0].grades[2] = 88.5;
    studentCount++;

    // TODO: Calculate averages, find top student, save to file, and load from file

    return 0;
}