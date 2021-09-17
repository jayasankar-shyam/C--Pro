#include <stdio.h>
int main()
{
    int i,n;
    struct employee
    {
        char name[50];
        int age;
        float salary;
    };
    struct employee emp[10];
    printf("Enter the number of employees : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        
        printf("Enter Full name : ");
        scanf("%s",&emp[i].name);
        printf("Enter age : ");
        scanf("%d", &emp[i].age);
        printf("Enter salary : ");
        scanf("%f", &emp[i].salary);
        printf("\n");
    }
    printf("\nDisplaying Information\n");
    for (i = 0; i < n; i++)
    {
        printf("Name : %s\n", emp[i].name);
        printf("Age : %d\n", emp[i].age);
        printf("Salary : %.2f\n", emp[i].salary);
    }
    return 0;
}