//serie de fibonacci
//primeros 80 numeros de la serie
#include<stdio.h>
main()
{
	/*Dec. Variables*/
	unsigned long int  x,y,z,n;
	/*Fin Dec. Variables*/
	/*Cuerpo programa*/
	x=0;
	printf("%lu",x);
	printf(", ");
	y=1;
	printf("%lu",y);
	for (n=0; n<=26; n++){
		z=x+y;
		printf(",");
		printf("%lu",z);
		x=y+z;
		printf(",");
		printf("%lu",x);
		y=x+z;
		printf(",");
		printf("%lu",y);
	}
/*Fin cuerpo programa*/
return(0);
}