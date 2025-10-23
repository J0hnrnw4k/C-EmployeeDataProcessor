# 💼 C Employee Data Processor

**Author:** John Rex  
**Language:** C  
**Topic:** File I/O • Dynamic Memory • Structs • Functions  
**Assignment:** Employee File Processing (A6)

---

## 🧩 Overview
This project reads a list of employees from a text file, stores them dynamically in an array of structs, and determines which employee has the **highest salary**.  
It demonstrates core C programming skills such as:

- File input and output operations  
- Dynamic memory allocation with `malloc()`  
- Struct-based data management  
- Function modularization and header file usage  

---

## 🧱 File Structure
| File | Description |
|------|--------------|
| `main.c` | Program entry point. Reads data, finds best employee, writes output, frees memory. |
| `employee.c` | Contains implementations for reading data, finding top salary, and writing results. |
| `employee.h` | Defines the `Employee` struct and function prototypes. |

---

## 🧾 Input & Output

### 📥 Input (`a6-input.txt`)
Each line contains an employee record:
