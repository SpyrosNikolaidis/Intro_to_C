#include <stdio.h>
#include <stdlib.h>

main()
{
	int a, b;
	printf("Input first number: ");
	scanf("%d", &a);
	printf("Input second number: ");
	scanf("%d", &b);
	
	if (a%2==0)
	    {
		if (b%2==0)
			printf("Both even");
		
		else
			printf("One odd one even");
		}
	else{
	
		if (b%2==0)
			printf("One odd one even");
		
		else
			printf("Both odd");
		}
}
	

