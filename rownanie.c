#include <stdio.h>
#include <math.h>

   
int  main(void)
{
	double  a1, a2, b1, b2, c1, c2;
	int wyznacznik , wyznacznikx , wyznaczniky;	
	{ 
		puts("Program do oblicznia równań za pomoca wyznaczników");

		printf( "Podaj wartoscc liczby a1 = \n"); scanf( "%lf", &a1);
		printf( "Podaj wartoscc liczby a2 = \n"); scanf( "%lf", &a2);
		printf( "Podaj wartoscc liczby b1 = \n"); scanf( "%lf", &b1); 
		printf( "Podaj wartoscc liczby b2 = \n"); scanf( "%lf", &b2);
		printf( "Podaj wartoscc liczby c1 = \n"); scanf( "%lf", &c1);
		printf( "Podaj wartoscc liczby c2 = \n"); scanf( "%lf", &c2);
	}
 
{
        printf("Pierwszy wyznacznik: %lf\n" , a1*b2 -b1*a2);
        printf("Wyznacznik x: %lf\n" , c1*b2 - b1*c2); 
	printf("Wyznacznik y: %lf\n" , a1*c2 - c2*a2); 
  
}

		return 0;
}

		
