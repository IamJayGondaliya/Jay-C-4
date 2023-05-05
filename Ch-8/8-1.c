#include<stdio.h>

void main() {
	
	int n;
	
	printf("Enter length of array: ");
	scanf("%d",&n);
	
	int a[n],i;
	
	for(i=0; i<n; i++) {
		printf("Enter a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++) {
		printf("a[%d]: %d\n",i,a[i]);
	}
	
}

/*
		1. WAP to create and print N number of 1D array.
		2. WAP to print sum of all 1D array elements.
		3. WAP to print only even numbers from 1D array.
		4. WAP to calculate factoriyal of all array elements from 1D array.
*/




