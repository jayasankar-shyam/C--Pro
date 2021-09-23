#include <stdio.h>
int main()
{
    //create
    FILE *fp;
    fp = fopen("sample.txt", "w");
    fprintf(fp, "Programming is Fun");
    fclose(fp);
    //console
    char s[50];
    fp = fopen("sample.txt", "r");
    while (feof(fp) == 0)
    {
        fscanf(fp, "%s", s);
        printf("%s ", s);
    }
    fclose(fp);
    //append
    fp = fopen("sample.txt", "a");
    fprintf(fp, " in C");
    fclose(fp);

    char k[50];
    fp = fopen("sample.txt", "r");
    printf("\n");
    while (feof(fp) == 0)
    {
        fscanf(fp, "%s", k);
        printf("%s ", k);
    }
    fclose(fp);
    return 0;
}