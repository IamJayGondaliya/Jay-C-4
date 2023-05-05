#include<stdio.h>
#include<conio.h>
#define pi 3.14
#define P printf
/*
	Keywords :
		- reserved words.
		- can't be used in other purpose.
		- 32 keywords.
		- int, char, float, void, long, unsigned
		- const, if, else, switch, case, default
		- while, do, for, struct, union, enum
	Constants:
		- fixed value.
			- using 'const' keyword
			- cont variable must be initialized
		- using MACRO
			- with use of #define pre-processor
	User input :
		- scanf("only format specifier",address of variable);
		- adress of operator	=> &a

	a = b
	b = a

	Area of circle		=> pi * r * r
	Area of square		=> l * l
	Area of rectangle	=> l * b
	Area of triangle	=> 0.5 * b * h
	Simple Interest		=> P * R * N / 100
	Parameters of Circle	=> 2 * pi * r
*/
//WAP to swap two numbers using third variable.
//WAP to swap two numbers without using third variable.
void main()
{
	int a,b,c;
	clrscr();

	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);

	c = a;
	a = b;
	b = c;

	printf("a: %d\n",a);
	printf("b: %d\n",b);

	getch();
}