#include<stdio.h>
#include<string.h>

/*
		Null character:
			- empty value can be considered as NULL or '\0'.
			- null can be denoted by NULL / '\0'
			
		String built in function :
			- can be accessed from #include<string.h> header file.
			
			gets(str);					=> get string
			puts(str);					=> put string
			
			strupr(str);				=> string upper
			strlwr(str);				=> string lower
			strrev(str);				=> string reverse
			strlen(str);				=> string length
			
			strcpy(str1,str2);			=> string copy
										=> str1 = str2;
			strcat(str1,str2);			=> string concate (merge)
										=> str1 = str1 + str2;
			strcmp(str1,str2);			=> string compare
											ans = str1-str2		(0, 1, -1)
										=> str1		str2		Ans
											A		 a		=>	 -1
											a		 A		=>	 1
											A		 A		=>   0
*/		

void main() {
	
	char str1[20],str2[20];
	int count = 0,i;
	
	printf("Enter first name: ");
	gets(str1);
	
	strcpy(str2,str1);
	
	strrev(str2);
	
	count = strcmp(str1,str2);
	
	if(count == 0) {
		printf("%s is palindrome !!\n",str1);
	}
	else {		
		printf("%s is not palindrome !!\n",str1);
	}
	
	printf("Name1 \t: ");
	puts(str1);
	printf("Name2 \t: ");
	puts(str2);
	printf("Comparison \t: %d",count);	
	
}

