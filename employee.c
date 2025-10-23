#include "employee.h"
#include <stdio.h>
#include <stdlib.h>

struct Employee* readData(const char* filename, int* size) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        fprintf(stderr, "Error opening file for reading.\n");
        exit(1);
    }

    // Count the number of lines in the file
    int lines = 0;
    char ch;
    while (!feof(file)) {
        ch = fgetc(file);
        if (ch == '\n') {
            lines++;
        }
    }

    // Rewind the file pointer
    rewind(file);

    // Dynamically allocate memory for the array of Employee structs
    struct Employee* employees = malloc(lines * sizeof(struct Employee));
    if (employees == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(1);
    }

    // Read data from the file and populate the array
    for (int i = 0; i < lines; i++) {
        fscanf(file, "%s %d %lf", employees[i].name, &employees[i].id, &employees[i].salary);
    }

    // Close the file
    fclose(file);

    // Set the size parameter
    *size = lines;

    return employees;
}

struct Employee getBestEmployee(struct Employee* employees, int size) {
    struct Employee bestEmployee = employees[0];
    for (int i = 1; i < size; i++) {
        if (employees[i].salary > bestEmployee.salary) {
            bestEmployee = employees[i];
        }
    }
    return bestEmployee;
}

void writeData(const char* filename, struct Employee bestEmployee) {
    FILE* file = fopen(filename, "w");
    if (file == NULL) {
        fprintf(stderr, "Error opening file for writing.\n");
        exit(1);
    }

    // Write the best employee's information to the file
    fprintf(file, "%s %d %.0lf", bestEmployee.name, bestEmployee.id, bestEmployee.salary);

    // Close the file
    fclose(file);
}
