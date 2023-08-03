#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char content[100];

    printf("\nEnter the filename: ");
    scanf("%s", filename);

    // Open the file in write mode
    file = fopen(filename, "w");

    if (file == NULL) {
        printf("\nError opening the file.\n");
        return 1;
    }

    printf("\nEnter the content to write to the file: ");
    scanf(" %[^\n]", content);

    // Write content to the file
    fprintf(file, "%s", content);

    printf("\nFile written successfully.\n");

    // Close the file
    fclose(file);

    // Open the file in read mode
    file = fopen(filename, "r");

    if (file == NULL) {
        printf("\nError opening the file.\n");
        return 1;
    }

    printf("\nFile content:\n");

    // Read and print the file content
    while (fgets(content, sizeof(content), file) != NULL) {
        printf("%s", content);
    }

    // Close the file
    fclose(file);

    // Open the file in append mode
    file = fopen(filename, "a");

    if (file == NULL) {
        printf("\nError opening the file.\n");
        return 1;
    }

    printf("\nEnter additional content to append to the file: ");
    scanf(" %[^\n]", content);

    // Append content to the file
    fprintf(file, "%s", content);

    printf("\nContent appended successfully.\n");

    // Close the file
    fclose(file);

    // Delete the file
    if (remove(filename) == 0) {
        printf("\nFile deleted successfully.\n");
    } else {
        printf("\nError deleting the file.\n");
        return 1;
    }

    return 0;
}
    