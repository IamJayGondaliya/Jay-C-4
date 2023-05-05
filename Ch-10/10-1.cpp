#include<stdio.h>

/*
			Function:
				- re-usable block of code which can be accessed any time
				  just by calling through it's name.
				- each function has unique signatures(name, return type, arguments) 
				  according to it's use.
				- function can be denoted by '(){}'.
				- Life cycle of function
				
					Declaration		(Register)
					Defination		(Put Logic)
					Calling			(Use)
				
				- Types of function.
				
					- Built in functions
						- printf(), scanf(), getch(), gets(), puts(), ....
						
					- User Defined Functions (UDF)
						- Take Nothing Return Nothing		TNRN
						- Take Something Return Nothing		TSRN
						- Take Nothing Return Something		TNRS
						- Take Something Return Something	TSRS
						
						Syntax of UDF:
						
							ReturnType funcName([arguments,...]) {
								//statements;
								//return [value];
							}
							
						ReturnType:
							- depends on if the function returns any value or not.
							- if doesn't returns	=>	void
							- if returns			=>	int, float, char, ....
						
*/

//Declaration
void sum();

//Defination
void sum() {
	
	int a,b;
	
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	
	printf("Sum: %d\n",a+b);
	
}

void main() {
	printf("START\n\n");
	
	printf("\nEND");
}














