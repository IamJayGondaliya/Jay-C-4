#include<stdio.h>

void main() {
	
	int i,j,s;
	
	for(i=1; i<=5; i++) {
		for(s=1; s<=5-i; s++) {
			printf("  ");
		}
		for(j=1; j<=i; j++) {
			if(j==1) {				
				printf("* ");
			}
			else {
				printf("  ");
			}
		}
		for(j=i-1; j>=1; j--) {
			if(j==1) {				
				printf("* ");
			}
			else {
				printf("  ");
			}
		}
		printf("\n");
	}
	
} 
