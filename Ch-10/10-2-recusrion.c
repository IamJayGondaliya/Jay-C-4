#include<stdio.h>

/*
		Recursion:
			- function calls itself.
			
			ReturnType funName() {			
				//Statements
				funName();			
			}
			
		factoriyal:
			5!
			
			5 * 4 * 3 * 2 * 1
			5 * 4!
				4 * 3!
					3 * 2!
					
			-N, 0, 1	=>	1
*/

int fact(int n) {	//	5,	4,	3,	2,	1
	if(n<=1) {		//	5X, 4X,	3X,	2X,	1
		return 1;
	}
	else {
		return n * fact(n-1);
		//	   5 * fact(4)					=>	5 * 24	=	120
		//		   4 * fact(3)				=> 	4 * 6	=	24
		//			   3 * fact(2)			=>  3 * 2	= 	6
		//				   2 * fact(1)		=> 	2 * 1	= 	2
		//					   1			=>	1		=	1
	}
}

void main() {

	int ans = fact(5);
	
	printf("Factoriyal: %d",ans);
	
}









