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
void add(int,int);

//Defination
void add(int a,int b) {	
	printf("Sum: %d\n",a+b);	
}

void sub(int m,int n) {	
	printf("Subtraction	: %d\n",m-n);	
}

void arraySum(int a[],int n) {	
	int i,sum = 0;
	
	for(i=0; i<n; i++) {
		sum += a[i];
	}
	
	printf("Sum of array: %d\n",sum);
}

void arrayInput(int a[],int n) {	
	int i;
	
	for(i=0; i<n; i++) {
		printf("Enter a[%d]: ",i);
		scanf("%d",&a[i]);
	}	
}

void arrayDisplay(int a[],int n) {	
	int i;
	
	for(i=0; i<n; i++) {
		printf("a[%d]: %d\n",i,a[i]);
	}	
}

void main() {	
	int n;
	
	printf("Enter n: ");
	scanf("%d",&n);
	
	int a[n];
	
	arrayInput(a,n);
	arrayDisplay(a,n);
	arraySum(a,n);	
}














