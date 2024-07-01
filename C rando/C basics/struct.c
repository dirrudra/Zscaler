#include <stdio.h>
#include <stdlib.h> // For dynamic memory allocation

// Define a structure for a person
struct Person {
    char name[50];
    int age;
};

int main() {
    // Writing to console
    printf("Hello, World!\n");

    // Reading from console
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);

    // Using a basic data structure (struct)
    struct Person person;
    printf("Enter name: ");
    scanf("%s", person.name); // Note: no & needed for arrays in scanf
    printf("Enter age: ");
    scanf("%d", &person.age);
    printf("Person: Name=%s, Age=%d\n", person.name, person.age);

    return 0;
}
