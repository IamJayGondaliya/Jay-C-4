#include<stdio.h>

void main()
{
	int n;
	
	printf("Enter number of elements: ");
	scanf("%d",&n);
	
	int a[n],i,j,fact;
	
	for(i=0; i<n; i++) {
		printf("Enter a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++) {
		
		fact = 1;
		j = 1;
		while(j<=a[i]) {
			fact = fact * j;
			j++;
		}
		
		printf("Factoriyal of a[%d]: %d = %d\n",i,a[i],fact);
	}
	
}
