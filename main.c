#include "employee.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Read data from input file
    int size;
    struct Employee* employees = readData("a6-input.txt", &size);

    // Get the best employee
    struct Employee bestEmployee = getBestEmployee(employees, size);

    // Write best employee data to output file
    writeData("a6-output.txt", bestEmployee);

    // Free dynamically allocated memory
    free(employees);

    return 0;
}

