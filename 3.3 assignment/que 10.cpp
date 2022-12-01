#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
    char name[30];
    int id,address;
    double age;
} Employee;
 
int main()
{
    //number of employees
    int n=5;

    //array to store structure values of all employees
    Employee employees[n];
 
    //Taking each employee detail as input
    printf("Enter %d Employee Details \n \n",n);
    for(int i=0; i<n; i++){
        printf("Employee %d:- \n",i+1);

        //Name
        printf("Name: ");
        scanf("%[^\n]s",employees[i].name);

        //ID
        printf("Id: ");
        scanf("%d",&employees[i].id);

        //age
        printf("age: ");
        scanf("%lf",&employees[i].age);

    
        //Salary
        printf("address: ");
        scanf("%lf",&employees[i].address);

    
        //to consume extra '\n' input
        char ch = getchar();
 
        printf("\n");
    }
 
    //Displaying Employee details
    printf("-------------- All Employees Details ---------------\n");
    for(int i=0; i<n; i++){
        printf("Name \t: ");
        printf("%s \n",employees[i].name);
 
        printf("Id \t: ");
        printf("%d \n",employees[i].id);
 
        printf("address \t: ");
        printf("%d \n",employees[i].address);
        
         printf("age \t: ");
        printf("%.2lf \n",employees[i].age);
        
 
        printf("\n");
    }
 
    return 0;
}
