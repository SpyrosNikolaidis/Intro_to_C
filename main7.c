#include <stdio.h>
#include <stdlib.h>


int main()
{
const char end='.';
	char c = getchar();
	int words=1;
	while (c!=end)
	{
		if (c==32){
			words++;
		
		}
			c=getchar();
		
	
	}
	printf("Total number of words is : %d",words);
} 
