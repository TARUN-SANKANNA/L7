#include <stdio.h>
#include <string.h>

// Define structure for Employee
struct Employee {
    int id;
    char name[50];
    float salary;
    char department[50];
};

int main() {
    int n, i;

    // Ask how many employees
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Create array of Employee structures
    struct Employee employees[n];

    // Input employee details
    for (i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        
        printf("ID: ");
        scanf("%d", &employees[i].id);

        printf("Name: ");
        scanf(" %[^\n]", employees[i].name); // To read full name including spaces

        printf("Salary: ");
        scanf("%f", &employees[i].salary);

        printf("Department: ");
        scanf(" %[^\n]", employees[i].department);
    }


