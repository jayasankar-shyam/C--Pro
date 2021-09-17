#include<stdio.h>
struct employee
{
    char name[50];
    int age;
    float bs;
    float da;
    float hra;
    float totalSalary;
};
int main()
{
    struct employee e;
        printf("Enter the name : ");
        gets(e.name);
        printf("Enter age : ");
        scanf("%d", &e.age);
        printf("Enter salary : ");
        scanf("%f", &e.salary);
    
}
