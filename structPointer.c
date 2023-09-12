#include <stdio.h>
#include <string.h>
// Structure definition for Date
struct Date
{
    int day;
    int month;
    int year;
};
// Structure definition for Student
struct Student
{
    int rollNumber;
    char name[50];
    struct Date dob;
};
void showStudent(struct Student *s)
{
    printf("Student Roll Number: %d\n", s->rollNumber);
    printf("Student Name: %s\n", s->name);
    printf("Student Birth Date: %d-%d-%d\n", s->dob.day, s->dob.month, s->dob.year);
}
int main()
{
    // Create an instance of the Student structure
    struct Student student;
    // Assign values to the members of the student structure
    student.rollNumber = 1;
    strcpy(student.name, "John Doe");
    student.dob.day = 15;
    student.dob.month = 5;
    student.dob.year = 2000;
    // Print the student information
    showStudent(&student);
    return 0;
}
