#include<stdio.h>
int main()
{
    char opt,
    double a,
    double b,
    float res,
    printf("choose an operator(+,-,*,/)");
    scanf("%d",&opt)
    if (opt == '/' )
{
printf (" You have selected: Division");
}
else if (opt == '*')
{
printf (" You have selected: Multiplication");
}

else if (opt == '-')
{
printf (" You have selected: Subtraction");
}
else if (opt == '+')
{
printf (" You have selected: Addition");
}
printf (" \n Enter the first number: ");
scanf(" %d", &a); 
printf (" Enter the second number: ");
scanf (" %d", &b); 

switch(opt)
{
case '+':
res = a + b; 
printf (" Addition of %d and %d is: %.2f", a, b, res);
break;

case '-':
res = a - b; 
printf (" Subtraction of %d and %d is: %.2f", a, b, res);
break;

case '*':
res = a*b;
printf("multiplication of %d and %d is %2f",a,b,res);
break;

case '/':
if (n2 == 0) // if n2 == 0, take another number
{
printf (" \n Divisor cannot be zero. Please enter another value ");
scanf ("%d", b);
}
res = a / b;
printf (" Division of %d and %d is: %.2f", a, b, res);
break;
default: /* use default to print default message if any condition is not satisfied */
printf (" Something is wrong!! Please check the options ");
}
return 0

}