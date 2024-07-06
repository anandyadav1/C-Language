#include <stdio.h>
#include <string.h>

int main()
{
    printf("Enter the any type string:\n");
    char str[50];
    //    scanf("%s", str);
    gets(str);
    int i=0;
    while (str[i] != '\0' )
    {
        i++;
    }
    printf("%d", i);

    int n = strlen(str);
    printf("%d\n", n);

    printf("%s", str);
    return 0;
}