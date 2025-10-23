#ifndef EMPLOYEE_H
#define EMPLOYEE_H

struct Employee {
    char name[11]; // 10 characters max with no spaces + null terminator
    int id;
    double salary;
};

struct Employee* readData(const char* filename, int* size);
struct Employee getBestEmployee(struct Employee* employees, int size);
void writeData(const char* filename, struct Employee bestEmployee);

#endif /* EMPLOYEE_H */
