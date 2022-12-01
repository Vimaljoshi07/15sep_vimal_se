#include <stdio.h>

struct Employee
{
    int id, age, address;
    char name[30], designation[30], department[30];
};

int main()
{
    struct Employee e;

    printf("Enter the id of the Employee: ");
    scanf("%d", &e.id);

    printf("Enter the age of the Employee: ");
    scanf("%d", &e.age);

    printf("Enter the name of the Employee: ");
    getchar();
    fgets(e.name, 30, stdin);

    printf("Enter the address of the Employee: ");
    scanf("%d", &e.address);

    printf("\nEmployee Details:\n");
    printf("Employee Id: %d\n", e.id);
    printf("Employee Name: %s", e.name);
    printf("Employee age: %d\n", e.age);
    
    printf("Employee address: %d\n", e.address);

    return 0;
}

