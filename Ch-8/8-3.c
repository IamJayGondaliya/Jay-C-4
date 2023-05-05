#include<stdio.h>

/*

		DataType  arrName[size] = {v1, v2,.... vN}
		
		DataType  arrName[row][column] = { {v1, v2, v3} , {v1, v2, v3}.... };

*/

void main() {
	
	int r,c,count = 0,sum = 0;
	
	printf("Enter number of row\t: ");
	scanf("%d",&r);
	printf("Enter number of column\t: ");
	scanf("%d",&c);
		
	int a[r][c],b[r][c],s[r][c];
	int i,j;
	
	for(i=0; i<r; i++) {
		for(j=0; j<c; j++) {
			printf("Enter a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
//	for(i=0; i<r; i++) {
//		for(j=0; j<c; j++) {
//			printf("Enter b[%d][%d]: ",i,j);
//			scanf("%d",&b[i][j]);
//		}
//	}
//	
//	for(i=0; i<r; i++) {
//		for(j=0; j<c; j++) {
//			s[i][j] = a[i][j] + b[i][j];
//		}
//	}
	
	//Matrix form	
	printf("Array a: \n");
	for(i=0; i<r; i++) {
		for(j=0; j<c; j++) {
			if(i==j || i+j == r-1) {				
				printf("%d ",a[i][j]);
			}
			else {				
				printf("  ");
			}
		}
		printf("\n");
	}
//	printf("Array b: \n");
//	for(i=0; i<r; i++) {
//		for(j=0; j<c; j++) {
//			printf("%d ",b[i][j]);
//		}
//		printf("\n");
//	}
//	printf("Sum of a & b: \n");
//	for(i=0; i<r; i++) {
//		for(j=0; j<c; j++) {
//			printf("%d ",s[i][j]);
//		}
//		printf("\n");
//	}
	
}
