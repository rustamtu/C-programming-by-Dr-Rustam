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
    printf("Student Roll Number: %d\n", student.rollNumber);
    printf("Student Name: %s\n", student.name);
    printf("Student Birth Date: %d-%d-%d\n", student.dob.day, student.dob.month, student.dob.year);

    return 0;
}

// In this program, we define two structures: Date and Student. The Date structure represents a date with three members: day, month, and year. The Student structure represents a student with three members: rollNumber (an integer), name (a character array), and dob (a structure of type Date).

// In the main() function, we create an instance of the Student structure called student. We assign values to the members of the student structure, including the nested birthDate structure. Finally, we print the student's roll number, name, and birth date.

// By using structures within structures, you can organize related data in a hierarchical manner, allowing you to represent more complex data structures.
