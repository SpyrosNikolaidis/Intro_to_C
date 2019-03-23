#include <stdio.h>
#include <stdlib.h>
int max(int x,int y);
int main()
{
int a,b;		
int m;
do{
printf("Input two numbers :");
scanf("%d %d",&a,&b);

m=max(a,b);
printf("The biggest number is %d",m);
}while(a!=b);
}

int max(int x,int y)
{
	if (x>y)
		return x;
	else 
		return y;
	
}
