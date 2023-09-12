#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

int main()
{
    // Generate a fake name using the function
    char *fakeName = generateFakeName();

    // Print the generated fake name
    printf("Generated Fake Name: %s\n", fakeName);

    // Free the allocated memory
    free(fakeName);

    return 0;
}
