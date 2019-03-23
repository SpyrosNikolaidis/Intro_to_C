#include <stdio.h>
#include <stdlib.h>
main()
{
	float num;
	float num1;
	
	printf("Enter first number:" );
 	scanf("%f", &num);

 	printf("Enter second number:" );
 	scanf("%f", &num1);
 	
	float prosthesh=num+num1;
	float afairesh=num-num1;
	float polaplasiasmos=num*num1;
	float diairesh=num/num1;

	printf("To athroisma twn dyo arithmwn kanei %f\n",prosthesh);
	printf("To apotelsma ths afaireshs twn dyo arithmwn einai %f\n",afairesh);
	printf("to apotelesma tou polaplasismoy twn dyo arithmwn einai %f\n",polaplasiasmos);
	printf("to apotelesma ths diaireshs twn dyo arithmwn einai %f\n",diairesh);
	


}

