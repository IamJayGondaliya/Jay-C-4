#include<stdio.h>
#include<conio.h>

void main()
{
	int i = 1,n;
	clrscr();

	printf("Enter any number: ");
	scanf("%d",&n);

	while(i <= n)
	{
		if(i%3 == 0)
		{
			printf("%d ",i);
		}
		i++;
	}

	getch();
}