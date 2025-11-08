#include <stdio.h>
#include <string.h>

// Define a structure for a Person
struct Person
{
    char name[50];
    int age;
    float height;
};

// Define a structure with nested structure
struct Student
{
    struct Person person;
    int studentId;
    char grade;
};

int main()
{
    // Creating and initializing a Person
    struct Person person1;
    strcpy(person1.name, "John Doe");
    person1.age = 25;
    person1.height = 1.75;

    printf("Person Details:\n");
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f m\n\n", person1.height);

    // Using nested structure
    struct Student student1;
    strcpy(student1.person.name, "Jane Smith");
    student1.person.age = 20;
    student1.person.height = 1.65;
    student1.studentId = 12345;
    student1.grade = 'A';

    printf("Student Details:\n");
    printf("Name: %s\n", student1.person.name);
    printf("Age: %d\n", student1.person.age);
    printf("Height: %.2f m\n", student1.person.height);
    printf("Student ID: %d\n", student1.studentId);
    printf("Grade: %c\n", student1.grade);

    return 0;
}