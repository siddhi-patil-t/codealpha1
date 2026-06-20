#include<stdio.h>
int main()
{
     int a,b;
      char op;
     printf("Enter Number a:");
     scanf("%d",&a);
     printf("Enter Number b:");
     scanf("%d",&b);
     printf("Enter a operation (+,-,*,/):");
     scanf(" %c",&op);
    switch (op)
  {  case '+':
     printf("Addition is %d",a+b);
    break;
    case '-':
     printf("subtraction is %d",a-b);
    break;
    case '*':
     printf("multiplication  is %d",a*b);
    break;
    case '/':
     printf("division is %d",a/b);
    break;

    default:
    printf("no operation here");  
}
     return 0;
}
