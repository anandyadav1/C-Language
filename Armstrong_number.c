#include <stdio.h>
int main()
{
    int n,p, r, temp, sum = 0, count = 0;
    printf("Enter the any number :");
    scanf("%d", &n);
    temp = n;
    p=n;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    printf("count=%d\n", count);

    while (temp != 0)
    {
        r = temp % 10;
        sum = sum + (pow(r, count));
        temp = temp / 10;
    }
    // sum=sum+1;
    printf("sum=%d\n",sum );
    printf("temp=%d\n",temp);
    printf("p=%d\n",p);
    // if(p==153){
        // sum+=1;
    // }

    if (p == sum)
    {
        printf("Nubmer is Armstrong number :");
    }
    else
    {
        printf("Number is not Armstrong number :");
    }
return 0;
}

