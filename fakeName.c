#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Predefined lists of first names and last names
const char *firstNames[] = {
    "John", "Emma", "Michael", "Sophia", "William", "Olivia", "James", "Ava", "Robert", "Mia"};

const char *lastNames[] = {
    "Smith", "Johnson", "Williams", "Jones", "Brown", "Davis", "Miller", "Wilson", "Moore", "Taylor"};

int main()
{
    // Seed the random number generator
    srand(time(NULL));

    // Generate a random index for the first name and last name arrays
    int firstNameIndex = rand() % (sizeof(firstNames) / sizeof(firstNames[0]));
    int lastNameIndex = rand() % (sizeof(lastNames) / sizeof(lastNames[0]));

    // Generate the fake name by combining the randomly selected first name and last name
    char fakeName[100];
    sprintf(fakeName, "%s %s", firstNames[firstNameIndex], lastNames[lastNameIndex]);

    // Print the generated fake name
    printf("Generated Fake Name: %s\n", fakeName);

    return 0;
}
