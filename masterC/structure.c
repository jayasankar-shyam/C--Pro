#include <stdio.h>
void main()
{
    struct details
    {
        char name[20];
        int class;
        int rollNo;
    }; // student[20];
    struct details student[20];
    int i = 0;
    printf("Enter the details :\n");
    while (i < 5)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Name : ");
        scanf("%s", student[i].name);
        printf("Class : ");
        scanf("%d", &student[i].class);
        printf("Roll No : ");
        scanf("%d", &student[i].rollNo);
        i++;
    }
    for (i = 0; i < 5; i++)
    {
        printf("The students name is %s\n", student[i].name);
        printf("The student belongs to class %d\n", student[i].class);
        printf("The students roll no is %d\n\n", student[i].rollNo);
    }
}