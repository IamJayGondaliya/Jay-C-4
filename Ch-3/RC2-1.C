#include<stdio.h>
#include<conio.h>
/*
	- Data Types
		- Indicates which type of data will be stored in variable.
		- Indicates how much memory bytes are allocated to the
		  variable.

		- Integer	=> Numbers  	=> int 	 =>10,20   => 2/4 bytes
		- Floating point=> Decimal	=> float =>3.14    => 4 bytes
		- Characters	=> Alphabets	=> char	 =>'A','z' => 1 bytes

	- Variables
		- Variables are the containers which stores the value(data)
		- Variables must be declared above clrscr()
		- syntax :
			- DataType varName = value;
		- var name must not contain...
			- space
			- special characters !, @. #, $, %, ^, &
			- can't begin with number
		- var name can contain...
			- uppercase
			- lowercase
			- camelCase
			- underscore	=> mu_var, myVar_, _myVar
	- Format Specifier :
		- int	=> %d, %i
		- float	=> %f
		- char	=> %c
	- Constants
*/
void main()
{
	int var_a = 10;
	int b = 5;
	clrscr();

	printf("%d + %d = %d\n",var_a,b,var_a+b);
	printf("%i * %i = %i\n",var_a,b,var_a*b);

	getch();
}