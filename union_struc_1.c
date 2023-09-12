#include <stdio.h>
#include <string.h>

// Structure definition
struct Person
{
    char name[20];
    int age;
};

// Union definition
union Data
{
    int number;
    float decimal;
    char c;
};

int main()
{
    // Structure usage
    struct Person person;
    int size = 0;
    strcpy(person.name, "John Doe");
    person.age = 25;
    size = sizeof(struct Person);
    printf("Size of Person struct= %d\n", size); // 56

    printf("Person's name: %s\n", person.name);
    printf("Person's age: %d\n", person.age);
    printf("\n");

    // Union usage
    union Data data;
    data.number = 66;

    printf("Data as a number: %d\n", data.number);
    // printf("Data as a decimal: %.2f\n", data.decimal);
    // printf("Data as char: %c\n", data.c);

    data.c = 'A';
    // printf("Data as a number: %d\n", data.number);
    // printf("Data as a decimal: %.2f\n", data.decimal);
    printf("Data as char: %c\n", data.c);

    data.decimal = 3.14;
    // printf("Data as a number: %d\n", data.number);
    printf("Data as a decimal: %.2f\n", data.decimal);
    // printf("Data as char: %c\n", data.c);

    return 0;
}
