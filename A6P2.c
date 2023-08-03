#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person person;
    
    // Writing structure to file
    printf("Enter name: ");
    fgets(person.name, sizeof(person.name), stdin);
    printf("Enter age: ");
    scanf("%d", &person.age);

    FILE* file = fopen("person.dat", "wb");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    
    fwrite(&person, sizeof(struct Person), 1, file);
    fclose(file);
    
    printf("Structure written to file successfully.\n");

    // Reading structure from file
    struct Person readPerson;
    
    file = fopen("person.dat", "rb");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    
    fread(&readPerson, sizeof(struct Person), 1, file);
    fclose(file);
    
    printf("Structure read from file:\n");
    printf("Name: %s\n", readPerson.name);
    printf("Age: %d\n", readPerson.age);
    
    return 0;
}
