#include <stdio.h>
#include<string.h>

int main()
{
   char str[] ="ajjagjsfhgkjhsfkjgfskjk";

    char *ptr = str;
    int i=0;
    while (*ptr != '\0')
    {  i++;
        printf("%c", *ptr);
        if(i%2 == 0){
            printf("\t");
        }
        ptr++;
    }

    return 0;
}