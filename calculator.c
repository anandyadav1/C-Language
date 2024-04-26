#include <stdio.h>
int main()
{
  int a, b, c;
  char choice;
  printf("Enter the any two no \n");
  scanf("%d%d", &a, &b);
  printf("+ for add:- - for subtraction:- * for multiply:-  for division\n");
  printf("Enter the choice \n");
  scanf(" %c", &choice);
  switch (choice)
  {
  case '+':
    c = a + b;
    printf("%d", c);
    break;
  case '-':
    c = a - b;
    printf("%d", c);
    break;
  case '*':
    c = a * b;
    printf("%d", c);
    break;
  case '/':
    c = a / b;
    printf("%d", c);
    break;
  default:
    printf("Wrong choice");
    break;
  }
  return 0;
}