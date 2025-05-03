 // Display employee details
    printf("\n--- Employee Details ---\n");
    for (i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("ID        : %d\n", employees[i].id);
        printf("Name      : %s\n", employees[i].name);
        printf("Salary    : %.2f\n", employees[i].salary);
        printf("Department: %s\n", employees[i].department);
    }

    return 0;
}

