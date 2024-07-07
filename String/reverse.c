#include <stdio.h>
#include <string.h>

int main()
{
    puts("Take the any string by user :");
    char str[50];
    gets(str);   //scanf("%[^\n]s", str);

    int count = 0;
    while (str[count] != '\0')
    {
        count++;
    }
    puts("This is the string length:");
    printf("%d", count);
    puts("");   //printf("\n");
    for(int i=0,  j=count-1; i<=j; i++, j--){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;

    }

    puts("After reverse String :");
    puts(str);
for(int i=0; i<count; i++){
    printf("%c ", str[i]);

}

    return 0;
}