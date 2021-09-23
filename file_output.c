#include <stdio.h>
int main()
{
    //create
    FILE *fp1, *fp2;
    int c = 0, w = 0, line = 1;
    char ch;
    fp1 = fopen("sample.txt", "r");
    while (feof(fp1) == 0)
    {
        ch = fgetc(fp1);
        c++;
        if (ch == ' ')
            w++;
        if (ch == '\n')
            line++;
    }
    fclose(fp1);
    fp2 = fopen("sample_output.txt", "w");
    fprintf(fp2,"Number of characters =%d\n",c);
    fprintf(fp2,"Number of words =%d\n",w+1);
    
    fprintf(fp2,"Number of lines =%d\n",line);
    fclose(fp2);
    return 0;
}

