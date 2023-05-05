#include<stdio.h>

/*
		ASCII	:
			- American Standard Code for Information Interchange
			- 1945, 
			- A-Z	=> 65-90
			- a-z	=> 97-122
			- 0-9	=> 48-57
			- 1-128
			
		Character conversion:
			- Upper-Lower	=> +32
			- Lower-Upper	=> -32
			
		String:
			- collection of characters
			
			
		naYAn
		
		Nayan
		
		if(str[0]>=97 && str[0]<=122) => str[i] -=32;
		
		str[1]....str[20]
		
		
*/

void main() {
	
	char b[5];
	
	printf("Enter name: ");
	scanf("%s",&b);
	
	int i;
	
	//Convert into UPPERCASE
	for(i=0; i<20; i++) {
		if(b[i]>=97 && b[i]<=122) {
			b[i] -= 32;
		}
	}

	printf("String: %s\n",b);
	
}

