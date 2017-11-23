#include <stdio.h>


void  wczytaj (double *a1 , double  *b1 , double *c1 ,
	       double *a2 , double *b2 , double *c2)
{
	  puts("Program do oblicznia równań za pomoca wyznaczników");

                printf( "Podaj wartoscc  a1 = \n"); scanf( "%lf", a1);
                printf( "Podaj wartoscc  a2 = \n"); scanf( "%lf", a2);
                printf( "Podaj wartoscc  b1 = \n"); scanf( "%lf", b1); 
                printf( "Podaj wartoscc  b2 = \n"); scanf( "%lf", b2);
                printf( "Podaj wartoscc  c1 = \n"); scanf( "%lf", c1);
                printf( "Podaj wartoscc  c2 = \n"); scanf( "%lf", c2);
}

		double wyznacznik_glowny( double a1, double a2, double b1, double b2) 
{
		return a1*b2 -a2*b1; 
}
		 double wyznacznik_x(  double b2, double b1, double c1, double c2)
{
                return b2*c1 -c2*b1;
}
		double wyznacznik_y( double a1, double a2, double c1, double c2)
{
                return a1*c2 -a2*c1; 
 }


int  main()
{
	double a1, a2, b1, b2, c1, c2;
	double W, Wx, Wy, x, y;

	wczytaj (&a1, &a2, &b1, &b2, &c1, &c2);
  	W= wyznacznik_glowny(a1, a2, b1, b2) ;
	Wx= wyznacznik_x(c1, c2, b1, b2);   
 	Wy= wyznacznik_y(a1, a2, c1, c2);
	x=Wx/W;
	y= Wy/W;

	printf("x =%lf , y= %lf\n", x, y );
	return 0;
}

