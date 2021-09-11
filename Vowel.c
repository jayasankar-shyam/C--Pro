//Program to check whether the entered character is a vowel or consonant
int main()
{
    char ch;
    printf("Enter a character : ");
    ch = getchar();
    if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')
        printf("\nThe entered character '%c' is a vowel\n", ch);
    else
        printf("\nThe entered character '%c' is consonant\n", ch);
    return 0;
}
