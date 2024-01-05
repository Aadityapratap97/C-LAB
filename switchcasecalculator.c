#include<stdio.h>
int main()
{
char operator;
double num1,num2;
printf("enter an operator(+,-,*,/):");
scanf("%c",&operator);
printf("enter the number1:");
scanf("%f",&num1);
printf("enter the number2:");
scanf("%ld",&num2);
switch(operator)
{
case'+':
printf("%2lf+%2lf=%2lf",num1,num2,num1+num2);
break;
case'-':
printf("%2lf-%2lf=%2lf",num1,num2,num1-num2);
break;
case'*':
printf("%2lf*%2lf=%2lf",num1,num2,num1*num2);
break;
case'/':
printf("%2lf/%2lf=%2lf",num1,num2,num1/num2);
break;
printf("ERROR:invalid input operator.\n");
}
return 0;
}