/*  JAYASANKAR SHYAM
    S2 AD
    ROLL NO : 40*/
#include <stdio.h>
int main()
{
    int i,n;
    struct employee
    {
        char name[50];
        int employee_id;
        float salary;
    };
    struct employee emp[50];
    printf("Enter the number of employees : ");
    scanf("%d", &n);
    printf("\n");
    for (i = 0; i < n; i++)
    {

        printf("Enter the name : ");
        scanf("%s",&emp[i].name);
        printf("Enter employee id : ");
        scanf("%d", &emp[i].employee_id);
        printf("Enter salary : ");
        scanf("%f", &emp[i].salary);
        printf("\n");
    }
    printf("\n------------------Displaying Information------------------\n");
    for (i = 0; i < n; i++)
    {
        printf("Employee No - %d\n",i+1);
        printf("Name : %s\n", emp[i].name);
        printf("Employee Id : %d\n", emp[i].employee_id);
        printf("Salary : %.2f\n", emp[i].salary);
        printf("\n");
    }
    return 0;
}
