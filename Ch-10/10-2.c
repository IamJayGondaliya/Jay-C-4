#include<stdio.h>

int sum(int a,int b) {	
	printf("Sum: %d\n",a+b);	
	return a+b;
}

float avg(int s,int n) {	
	return (float)s/(float)n;	
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

int arraySum(int a[],int n) {	
	int i,sum = 0;
	
	for(i=0; i<n; i++) {
		sum += a[i];
	}
	
	return sum;
}

float arrayAvg(int a[],int n) {	
	return (float)arraySum(a,n)/(float)n;
}

void main() {
	
	int n;
	
	printf("Enter length: ");
	scanf("%d",&n);
	
	int a[n];
	
	arrayInput(a,n);
	arrayDisplay(a,n);
	
	int ans = arrayAvg(a,n);
	
	printf("Average: %d",ans);
	
}










