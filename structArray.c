#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// Predefined lists of first names and last names
const char *firstNames[] = {
    "John", "Emma", "Michael", "Sophia", "William", "Olivia", "James", "Ava", "Robert", "Mia"};

const char *lastNames[] = {
    "Smith", "Johnson", "Williams", "Jones", "Brown", "Davis", "Miller", "Wilson", "Moore", "Taylor"};

// Function to generate a fake name
char *generateFakeName()
{
    // Seed the random number generator
    srand(time(NULL));

    // Generate a random index for the first name and last name arrays
    int firstNameIndex = rand() % (sizeof(firstNames) / sizeof(firstNames[0]));
    int lastNameIndex = rand() % (sizeof(lastNames) / sizeof(lastNames[0]));

    // Allocate memory for the fake name
    char *fakeName = (char *)malloc(100 * sizeof(char));

    // Generate the fake name by combining the randomly selected first name and last name
    sprintf(fakeName, "%s %s", firstNames[firstNameIndex], lastNames[lastNameIndex]);

    // Return the generated fake name
    return fakeName;
}

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
    // rollNumber   name    dob(d-m-y)
    printf("%d\t%s\t%d-%d-%d\n", s->rollNumber, s->name, s->dob.day, s->dob.month, s->dob.year);
}

int main()
{
    // Create an instance of the Student structure
    struct Student student[10];
    int n, i;
    printf("Enter n\n");
    scanf("%d", &n);
    printf("Enter %d student details:\n", n);
    for (i = 0; i < n; i++)
    {
        student[i].rollNumber = i + 1;
        strcpy(student[i].name, generateFakeName());
        printf("Enter date of birth (dd-mm-yyyy) for Roll No. %d, Name: %s\n", student[i].rollNumber, student[i].name);
        scanf("%d", &student[i].dob.day);
        scanf("%d", &student[i].dob.month);
        scanf("%d", &student[i].dob.year);
    }
    printf("Student details in tabular form\n");
    printf("RollNo\tName\t\tDate of Birth (DOB)\n");
    for (i = 0; i < n; i++)
    {
        showStudent(&student[i]);
    }
    return 0;
}

// PS E:\Programmings\C Programs> .\a.exe
// Enter n
// 3
// Enter 3 student details:
// Enter date of birth (dd-mm-yyyy) for Roll No. 1, Name: Emma Jones
// 01 10 1999
// Enter date of birth (dd-mm-yyyy) for Roll No. 2, Name: Olivia Brown
// 12 11 2007
// Enter date of birth (dd-mm-yyyy) for Roll No. 3, Name: Emma Jones
// 13 06 2008
// Student details in tabular form
// RollNo  Name            Date of Birth (DOB)
// 1       Emma Jones      1-10-1999
// 2       Olivia Brown    12-11-2007
// 3       Emma Jones      13-6-2008