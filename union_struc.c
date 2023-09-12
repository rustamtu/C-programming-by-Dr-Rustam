#include <stdio.h>
#include <string.h>

// Structure definition
struct Person
{
    char name[50];
    int age;
};

// Union definition
union Data
{
    int number;
    float decimal;
    char text[20];
};

int main()
{
    // Structure usage
    struct Person person;
    strcpy(person.name, "John Doe");
    person.age = 25;

    printf("Person's name: %s\n", person.name);
    printf("Person's age: %d\n", person.age);
    printf("\n");

    // Union usage
    union Data data;
    data.number = 10;

    printf("Data as a number: %d\n", data.number);
    printf("Data as a decimal: %.2f\n", data.decimal);
    printf("Data as text: %s\n", data.text);

    strcpy(data.text, "Hello");

    printf("Data as a number: %d\n", data.number);
    printf("Data as a decimal: %.2f\n", data.decimal);
    printf("Data as text: %s\n", data.text);

    data.decimal = 3.14;

    printf("Data as a number: %d\n", data.number);
    printf("Data as a decimal: %.2f\n", data.decimal);
    printf("Data as text: %s\n", data.text);

    return 0;
}

// In this program, we define a structure called Person with two members: name (a character array) and age (an integer). We create an instance of the structure called person and assign values to its members. Then, we print the values of the name and age members.

// Next, we define a union called Data with three members: number (an integer), decimal (a float), and text (a character array). We create an instance of the union called data and assign a value to the number member. We print the value of the number member.

// Then, we assign a string to the text member of the union and print it. Finally, we assign a float value to the decimal member and print it. Notice that when we assign a value to one member of the union, the previous value becomes overridden.

// This example demonstrates the difference between unions and structures. Structures allocate memory for each member separately, while unions allocate memory that is shared by all members. The size of a union is determined by the largest member, whereas the size of a structure is the sum of the sizes of its members.