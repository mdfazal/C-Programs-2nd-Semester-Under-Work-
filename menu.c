/*Write a menu-driven program that can add, subtract, multiply and divide two
numbers (provided as input).*/

#include <stdio.h>
main()
{
	double add, sub, mul, div;
	double a,b;
	char ch;
	printf("enter 2 numbers");
	scanf("%lf,%lf",&a,&b);
	printf("Enter 1 to add");
	printf("Enter 2 to subtract");
	printf("Enter 3 to multiply");
	printf("Enter 4 to divide");
	switch(ch)
	{
		case:1
		add = a+b;
		printf("Sum is %lf",add);
		break;
		
		case:2
		sub = a-b;
		printf("difference is %lf",sub);
		break;
	
		case:3
		mul = a*b;
		printf("product is %lf",div);
		break;
		
		case:4
		div=a/b;
		printf("division is %lf",div);
		break;
	
		default:
		printf("Please enter number between 1-4");
		
	}

		